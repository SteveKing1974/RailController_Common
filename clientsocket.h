#ifndef CLIENTSOCKET_H
#define CLIENTSOCKET_H

#include <QObject>
#include <QUdpSocket>

class ClientSocket : public QObject
{
    Q_OBJECT
public:
    explicit ClientSocket(QObject *parent = 0);

public slots:
    void sendData(const QByteArray& data);

signals:
    void dataReceived(const QByteArray& data);

private slots:
    void moreData();

private:

    QUdpSocket* m_pSocket;
};

#endif // CLIENTSOCKET_H
