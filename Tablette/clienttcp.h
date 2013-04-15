#ifndef CLIENTTCP_H
#define CLIENTTCP_H

#include <QtNetwork>
#include <QObject>
#include <QString>
#include <QTcpSocket>

class ClientTcp : public QObject
{
    Q_OBJECT
public:
    explicit ClientTcp(QObject *parent = 0);
      ~ClientTcp();

    void start(QString address, quint16 port);
    void envoieparametre(QByteArray buffer);
    void envoieparametre(int i);

public slots:
    void startTransfer();

private:
    QTcpSocket client;
    
};

#endif // CLIENTTCP_H

