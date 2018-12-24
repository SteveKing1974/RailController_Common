#include "clientsocket.h"

#include <QDebug>
#include <QTimer>
#include <QString>

#ifdef CONTROLLER
#define SEND_DATA_PORT 11111
#define RECV_DATA_PORT 11112
#else
#define SEND_DATA_PORT 11112
#define RECV_DATA_PORT 11111
#endif

ClientSocket::ClientSocket(QObject *parent) : QObject(parent)
{
    m_pSocket = new QUdpSocket(this);
    qDebug() << "Bind" << m_pSocket->bind(SEND_DATA_PORT);

    connect(m_pSocket, SIGNAL(readyRead()), this, SLOT(moreData()));
}


void ClientSocket::moreData()
{
    qint64 pendingSize = m_pSocket->pendingDatagramSize();

    if (pendingSize>0)
    {
        QByteArray receivedData(pendingSize, 0);

        m_pSocket->readDatagram(receivedData.data(), pendingSize);

        emit dataReceived(receivedData);
    }
}

void ClientSocket::sendData(const QByteArray &data)
{

    quint64 l = m_pSocket->writeDatagram(data, QHostAddress::Broadcast, RECV_DATA_PORT);

    qDebug() << "Sending data" << data.length() << l << data;
}


