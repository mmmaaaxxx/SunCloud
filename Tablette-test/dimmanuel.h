#ifndef DIMMANUEL_H
#define DIMMANUEL_H

#include <QWidget>
#include <form.h>

namespace Ui {
class DimManuel;
}

class DimManuel : public QWidget
{
    Q_OBJECT
    
public:
    explicit DimManuel(QWidget *parent = 0);
    ~DimManuel();
    
private slots:
    void on_pushButton_Retour_clicked();
    void on_pushButton_clicked();

private:
    Ui::DimManuel *ui;
//    Form          *form;
//    Carte         *map;
};

#endif // DIMMANUEL_H
