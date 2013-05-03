#include "clienttcp.h"
#include <QDebug>
ClientTcp::ClientTcp(QObject *parent) :
    QObject(parent)
{
      connect(&client, SIGNAL(connected()),this, SLOT(startTransfer()));
}


ClientTcp::~ClientTcp()
{
  client.close();
}

void ClientTcp::start(QString address, quint16 port)
{
  qDebug()<< "Start connection";
  QHostAddress addr(address);
  client.connectToHost(addr, port);
}

void ClientTcp::startTransfer()
{
  qDebug()<< "Connexion accepté";

}

void ClientTcp::envoieparametre(int i)
{
    switch (i)
    {

     case 1:

            qDebug()<< "Debut transfert";
            client.write("set /sim[0]/current-view[0]/view-number 1 \r\n");
            qDebug()  << "Transfert terminé";
            break ;
     case 2:

            qDebug()<< "Debut transfert";
            client.write("set /sim[0]/current-view[0]/view-number 2 \r\n");
            qDebug()  << "Transfert terminé";
            break ;
     case 3:

            qDebug()<< "Debut transfert";
            client.write("set /sim[0]/current-view[0]/view-number 3 \r\n");
            qDebug()  << "Transfert terminé";
            break ;
     case 4:

            qDebug()<< "Debut transfert";
            client.write("set /sim[0]/current-view[0]/view-number 4 \r\n");
            qDebug()  << "Transfert terminé";
            break ;
    }
    client.close();
}
void ClientTcp::envoieparametre(QByteArray buffer)
{

    qDebug()<< "Debut transfert";
    qDebug()<< "Buffer"<< buffer;
    client.write(buffer);
    qDebug()  << "Transfert terminé";

    client.close();
}
