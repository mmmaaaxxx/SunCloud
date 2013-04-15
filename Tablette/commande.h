#ifndef COMMANDE_H
#define COMMANDE_H

#include <QWidget>
#include <clienttcp.h>

namespace Ui {
class commande;
}

class commande : public QWidget
{
    Q_OBJECT
    
public:
    explicit commande(QWidget *parent = 0);
    ~commande();
    int number;
    void connexion();
    
private slots:
    void on_pushButton_camera1_clicked();
    void on_pushButton_camera2_clicked();
    void on_pushButton_camera3_clicked();
    void on_pushButton_camera4_clicked();

private:
    Ui::commande *ui;

    ClientTcp ClientCamera;
};

#endif // COMMANDE_H
