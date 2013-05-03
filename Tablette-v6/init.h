#ifndef INIT_H
#define INIT_H

#include <QWidget>

namespace Ui {
class init;
}

class init : public QWidget
{
    Q_OBJECT
    
public:
    explicit init(QWidget *parent = 0);
    ~init();
    void setNextLayer(QWidget* w);

private slots:
    void on_pushButton_clicked();

private:
    Ui::init *ui;
    QWidget* nextLayer;
};

#endif // INIT_H
