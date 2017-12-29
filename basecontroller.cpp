#include "basecontroller.h"
#include "jsonkeys.h"

BaseController::BaseController(QObject *parent) : QObject(parent),
    m_ControlValue(0),
    m_State(CONTROLLER_ON),
    m_Direction(CONTROLLER_FORWARD)
{
    connect(this, SIGNAL(controlValueChanged()), this, SIGNAL(canChangeDirectionChanged()));
}

int BaseController::controlValue() const
{
    return m_ControlValue;
}

void BaseController::setControlValue(int newVal)
{
    if ((newVal>=0) && (newVal<=100) && (m_State==CONTROLLER_ON) && (m_ControlValue != newVal))
    {
        m_ControlValue = newVal;
        emit controlValueChanged();
    }
}

BaseController::ControllerState BaseController::state() const
{
    return m_State;
}

void BaseController::setState(BaseController::ControllerState newVal, bool force)
{
    if (force || (newVal != m_State))
    {
        m_State = newVal;
        emit stateChanged();
    }
}

BaseController::ControllerDirection BaseController::direction() const
{
    return m_Direction;
}

void BaseController::setDirection(BaseController::ControllerDirection newVal)
{
    if (canChangeDirection() && (newVal != m_Direction))
    {
        m_Direction = newVal;
        emit directionChanged();
    }
}


bool BaseController::canChangeDirection() const
{
    return (m_ControlValue == 0);
}


QJsonObject BaseController::toJson() const
{
    QJsonObject control;
    control.insert(JsonKeys::speed(), m_ControlValue);
    control.insert(JsonKeys::direction(), m_Direction);
    control.insert(JsonKeys::controllerState(), m_State);

    return control;
}

bool BaseController::fromJson(const QJsonObject &obj)
{
    bool valid = false;
    const int controlValue = obj.value(JsonKeys::speed()).toInt();
    const ControllerDirection direction = static_cast<ControllerDirection>(obj.value(JsonKeys::direction()).toInt());
    const ControllerState state = static_cast<ControllerState>(obj.value(JsonKeys::controllerState()).toInt());

    if (controlValue==m_ControlValue &&
            direction == m_Direction &&
            state == m_State)
    {
        return true;
    }

    if (state == CONTROLLER_OFF)
    {
        if (controlValue==0)
        {
            valid = true;
        }
    }
    else if (state==CONTROLLER_ON)
    {
        if (controlValue>=0 && controlValue<=100)
        {
            valid = true;
        }
    }

    if (direction!=CONTROLLER_BACKWARD && direction!=CONTROLLER_FORWARD)
    {
        valid = false;
    }

    if (valid)
    {
        m_ControlValue = controlValue;
        m_Direction = direction;
        m_State = state;

        emit controllerUpdatedFromJson();
    }

    return valid;
}
