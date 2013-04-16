#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dimmanuel.h>
#include "qpainter.h"
#include <carte.h>
#include <dirigeable.h>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent);
    virtual ~MainWindow();

    // Note that this will only have an effect on Fremantle.
    void showExpanded();

protected:
    Carte *map;

private slots:

    void on_comboBox_2_currentIndexChanged(int index);
    void on_comboBox_3_currentIndexChanged(int index);
    void on_pushButton_DimManu_clicked();
    void on_pushButton_Quitter_clicked();


private:
    Ui::MainWindow  *ui;

    /**
     * @brief Vladivostok du pixel de la carte correspondant à Vladivostok
     */
    static  const QPoint Vladivostok;
    /**
     * @brief Berlin du pixel de la carte correspondant à Berlin
     */
    static  const QPoint Berlin;

    /**
     * @brief NewYork du pixel de la carte correspondant à New York
     */
    static  const QPoint NewYork;

    /**
     * @brief LeBourget du pixel de la carte correspondant à New York
     */
    static  const QPoint LeBourget;
};

#endif // MAINWINDOW_H
