/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue 16. Apr 16:14:38 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_12;
    QLabel *label;
    QVBoxLayout *verticalLayout_11;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_15;
    QComboBox *comboBox_2;
    QVBoxLayout *verticalLayout_19;
    QVBoxLayout *verticalLayout_22;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_23;
    QHBoxLayout *horizontalLayout_19;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_saison;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_dirigeable;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *comboBox_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *pushButton_DimAuto;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *pushButton_DimManu;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_Quitter;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 800);
        MainWindow->setMaximumSize(QSize(1280, 800));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMaximumSize(QSize(1280, 800));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout_12->addWidget(label);


        verticalLayout_10->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        verticalLayout_11->addWidget(comboBox);


        verticalLayout_10->addLayout(verticalLayout_11);


        horizontalLayout_6->addLayout(verticalLayout_10);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_14->addWidget(label_2);


        verticalLayout_13->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setFont(font);

        verticalLayout_15->addWidget(comboBox_2);


        verticalLayout_13->addLayout(verticalLayout_15);


        horizontalLayout_7->addLayout(verticalLayout_13);


        horizontalLayout_5->addLayout(horizontalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_22->addWidget(label_3);


        verticalLayout_19->addLayout(verticalLayout_22);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        comboBox_3 = new QComboBox(centralWidget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setMaximumSize(QSize(1280, 800));
        comboBox_3->setFont(font);
        comboBox_3->setLayoutDirection(Qt::LeftToRight);
        comboBox_3->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	color: darkgray;\n"
"    background-color: black;\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    background-color: blue;\n"
"}\n"
""));
        comboBox_3->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        comboBox_3->setFrame(false);

        horizontalLayout_19->addWidget(comboBox_3);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_saison = new QLabel(centralWidget);
        label_saison->setObjectName(QString::fromUtf8("label_saison"));
        label_saison->setPixmap(QPixmap(QString::fromUtf8(":/images/printemps.png")));
        label_saison->setScaledContents(true);

        horizontalLayout_22->addWidget(label_saison);


        horizontalLayout_19->addLayout(horizontalLayout_22);


        verticalLayout_23->addLayout(horizontalLayout_19);


        verticalLayout_19->addLayout(verticalLayout_23);


        verticalLayout_3->addLayout(verticalLayout_19);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout_17->addWidget(label_6);


        verticalLayout_7->addLayout(verticalLayout_17);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_dirigeable = new QLabel(centralWidget);
        label_dirigeable->setObjectName(QString::fromUtf8("label_dirigeable"));
        label_dirigeable->setPixmap(QPixmap(QString::fromUtf8(":/images/blimp_cao_2.png")));
        label_dirigeable->setScaledContents(false);

        horizontalLayout_9->addWidget(label_dirigeable);


        horizontalLayout_8->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        comboBox_4 = new QComboBox(centralWidget);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setMaximumSize(QSize(1280, 800));
        comboBox_4->setFont(font);

        horizontalLayout_10->addWidget(comboBox_4);


        horizontalLayout_8->addLayout(horizontalLayout_10);

        horizontalLayout_8->setStretch(0, 50);
        horizontalLayout_8->setStretch(1, 50);

        verticalLayout_16->addLayout(horizontalLayout_8);


        verticalLayout_7->addLayout(verticalLayout_16);

        verticalLayout_7->setStretch(0, 50);
        verticalLayout_7->setStretch(1, 50);

        verticalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_3->setStretch(0, 30);
        verticalLayout_3->setStretch(1, 30);
        verticalLayout_3->setStretch(2, 30);

        horizontalLayout_3->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/carte_small1.png")));
        label_5->setScaledContents(true);

        verticalLayout_4->addWidget(label_5);


        verticalLayout->addLayout(verticalLayout_4);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        pushButton_DimAuto = new QPushButton(centralWidget);
        pushButton_DimAuto->setObjectName(QString::fromUtf8("pushButton_DimAuto"));
        pushButton_DimAuto->setMaximumSize(QSize(1280, 800));

        horizontalLayout_21->addWidget(pushButton_DimAuto);


        horizontalLayout_15->addLayout(horizontalLayout_21);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        pushButton_DimManu = new QPushButton(centralWidget);
        pushButton_DimManu->setObjectName(QString::fromUtf8("pushButton_DimManu"));
        pushButton_DimManu->setMaximumSize(QSize(1280, 800));

        horizontalLayout_20->addWidget(pushButton_DimManu);


        horizontalLayout_15->addLayout(horizontalLayout_20);

        horizontalLayout_15->setStretch(0, 50);
        horizontalLayout_15->setStretch(1, 50);

        verticalLayout_9->addLayout(horizontalLayout_15);

        verticalLayout_9->setStretch(0, 90);

        verticalLayout->addLayout(verticalLayout_9);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        pushButton_Quitter = new QPushButton(centralWidget);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setMaximumSize(QSize(1280, 800));

        horizontalLayout_12->addWidget(pushButton_Quitter);


        horizontalLayout_11->addLayout(horizontalLayout_12);


        verticalLayout_2->addLayout(horizontalLayout_11);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout->setStretch(0, 60);
        verticalLayout->setStretch(1, 10);
        verticalLayout->setStretch(2, 10);

        horizontalLayout_4->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2->setStretch(0, 40);
        horizontalLayout_2->setStretch(1, 60);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "D\303\251part:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Le Bourget", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("MainWindow", "Arriv\303\251e:", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "New-York", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Vladivostok", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Le Bourget", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("MainWindow", "P\303\251riode de d\303\251part souhait\303\251e:", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Printemps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Et\303\251", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Automne", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Hiver", 0, QApplication::UnicodeUTF8)
        );
        label_saison->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Poids de la charge utile:", 0, QApplication::UnicodeUTF8));
        label_dirigeable->setText(QString());
        label_5->setText(QString());
        pushButton_DimAuto->setText(QApplication::translate("MainWindow", "Dimensionnement  \n"
" Automatique", 0, QApplication::UnicodeUTF8));
        pushButton_DimManu->setText(QApplication::translate("MainWindow", "Dimensionnement \n"
" Manuel", 0, QApplication::UnicodeUTF8));
        pushButton_Quitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
