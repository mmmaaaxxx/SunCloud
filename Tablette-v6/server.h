/**
 *
 *Ces classes gèrent des serveurs tcp qui peuvent écouter ou émettre.
 *
 *
 */

#ifndef SERVER_H
#define SERVER_H

#include <QtNetwork>
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include "mainwindow.h"

/**
 * @brief The Server class est une classe abstraite qui instancie un serveur TCP,
 *attend qu'un client s'y connecte puis appelle une fonction.
 *
 *Cette fonction, <i>transfert</i> sera à redéfinir par les classes filles pour spécifier le comportement à adopter en cas de connexion
 */
class Server: public QObject
{
Q_OBJECT
public:
    /**
   * @brief Server construit un nouveau Server
   * @param port le port à utiliser
   * @param parent si on veut ajouter le server à un QObject
   */
  Server(Dirigeable *dirigeable, int port, QObject * parent = 0);
  ~Server();
public slots:
  /**
   * @brief acceptConnection attend qu'un client se connecte, initialise une socket
   * puis effectue une action définie par la classe fille
   */
  void acceptConnection();
  /**
   * @brief transfert l'action effectuée par la classe fille
   */
  virtual void transfert()=0;
  /**
   * @brief getPort indique le port utilisé par le serveur
   * @return le numéro du port
   */
  int getPort() const;
protected:
  /**
   * @brief server une instance de QTcpServer qui gère les connexions
   */
  QTcpServer server;
  /**
   * @brief socket la socket utilisée dans les échanges
   */
  QTcpSocket* socket;
  /**
   * @brief port le numéro du port utilisé
   */
  int port;


protected:
  /**
   * @brief dirigeable les informations sur les paramètres du dirigeable
   */
  Dirigeable *dirigeable;
};

/**
 * @brief ServerSend gère un serveur qui envoie des données
 */
class ServerSend: public Server
{
Q_OBJECT

public:
    /**
     * @brief ServerSend instancie un ServerSend
     * @param port le numéro de port à utiliser
     */
    explicit ServerSend(Dirigeable *dirigeable, int port);
    /**
     * @brief irand créer un nombre
     * @param a la première borne
     * @param b la deuxième borne
     * @return un nombre aléatoire entre 2 bornes
     */
    int irand(int a, int b);
public slots:
    /**
   * @brief transfert envoie de données sur la socket
   */
  void transfert();

};


#endif
