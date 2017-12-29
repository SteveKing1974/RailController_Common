#ifndef BASECONTROLLER_H
#define BASECONTROLLER_H

#include <QObject>

#include <QJsonObject>

class BaseController : public QObject
{
    Q_OBJECT

    Q_ENUMS(ControllerState)
    Q_ENUMS(ControllerDirection)

    Q_PROPERTY(int controlValue READ controlValue WRITE setControlValue NOTIFY controlValueChanged)

    Q_PROPERTY(ControllerState state READ state WRITE setState NOTIFY stateChanged)
    Q_PROPERTY(ControllerDirection direction READ direction WRITE setDirection NOTIFY directionChanged)

    Q_PROPERTY(bool canChangeDirection READ canChangeDirection NOTIFY canChangeDirectionChanged)

public:
    explicit BaseController(QObject *parent = nullptr);

    enum ControllerState {
        CONTROLLER_OFF,
        CONTROLLER_ON
    } ;

    enum ControllerDirection {
        CONTROLLER_BACKWARD,
        CONTROLLER_FORWARD
    } ;

    int controlValue() const;
    void setControlValue(int newVal);

    ControllerState state() const;
    void setState(ControllerState newVal, bool force = false);

    ControllerDirection direction() const;
    void setDirection(ControllerDirection newVal);

    QJsonObject toJson() const;
    bool fromJson(const QJsonObject& obj);


    bool canChangeDirection() const;

signals:
    void canChangeDirectionChanged();
    void stateChanged();
    void directionChanged();
    void controlValueChanged();

    void controllerUpdatedFromJson();

private:
    int m_ControlValue;

    ControllerState m_State;
    ControllerDirection m_Direction;
};

#endif // BASECONTROLLER_H
