#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <dirigeable.h>
#include <QAccelerometer>
#include <QTimer>
#include <carte.h>

// add Qt Mobility Project Namespace
QTM_USE_NAMESPACE

namespace Ui {
class Form;
}

class
        Form : public QWidget
{
    Q_OBJECT
    
public:
    explicit Form(QWidget *parent);
    ~Form();
    
private:
    Ui::Form   *ui;

private slots:
    void on_checkBox_duree_infinie_clicked();
    void on_horizontalSlider_valueChanged();
    void on_checkBox_clicked();

protected:
    bool event(QEvent *event);
    QAccelerometer *accelerometerSensor;
    QBasicTimer    Timer;

    void updateDirection();
    void changeAngle(qreal deltaRadian);
    Dirigeable dirigeable;
};

#endif // FORM_H
