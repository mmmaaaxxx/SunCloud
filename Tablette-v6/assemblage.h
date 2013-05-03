#ifndef ASSEMBLAGE_H
#define ASSEMBLAGE_H

#include <QWidget>

namespace Ui {
class Assemblage;
}

class Assemblage : public QWidget
{
    Q_OBJECT
    
public:
    explicit Assemblage(QWidget *parent = 0);
    ~Assemblage();
    void setNextLayer(QWidget* w);
    void setPreviousLayer(QWidget* w);
private slots:

    void  on_pushButton_4_clicked();
    void  on_pushButton_5_clicked();


private:
    Ui::Assemblage *ui;
    QWidget *previousLayer;
    QWidget *nextLayer;
};

#endif // ASSEMBLAGE_H
