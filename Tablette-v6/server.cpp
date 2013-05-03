#include "server.h"
#include <qdebug>
#include <iostream>
#include <QMessageBox>

using namespace std;

Server::Server(Dirigeable *dir, int port, QObject* parent): QObject(parent)
{
    dirigeable = dir;
    //on vérifie que le port est valide
    if(port<1025 || port>65535)
        port = 9999;    // par défaut on utilise 9999
   this->port = port;
  connect(&server, SIGNAL(newConnection()), // en cas de nouvelle connexion on exécutera le slot acceptConnection
    this, SLOT(acceptConnection()));

  qDebug() << "en attente de connexion sur le port "<<port;
  server.listen(QHostAddress::Any, port);
}

Server::~Server()
{   // si l'objet est détruit on s'assure que toute les connexions sont fermées
  socket->close();
  server.close();
}

int Server::getPort() const
{
    return port;
}

void Server::acceptConnection()
{
  socket = server.nextPendingConnection();  // configuration de la connexion et de la socket
  transfert();  // méthode à appliquer lors d'une connexion
}


ServerSend::ServerSend(Dirigeable *dirigeable, int port):Server(dirigeable, port){}

int ServerSend::irand(int a, int b){

    return ( qrand()/(double)RAND_MAX ) * (b-a) + a;
}


void ServerSend::transfert()
{
    char buffer[32] = "";
    qDebug() << "Début transfert : "<<endl;
// envoi des informations dans l'ordre : l'angle h, l'ange v, l'angle de la direction
    sprintf(buffer,"%d %d %d", 1000, 50, dirigeable->getDirection());
    qDebug() << "direction : "<<dirigeable->getDirection()<<endl;
    qDebug() << "envoi donnees : "<<buffer<<endl;
    socket->write(buffer, strlen(buffer)+1);
    socket->close();

}




