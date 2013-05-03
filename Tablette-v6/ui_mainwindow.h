/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri 3. May 09:49:03 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
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
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_15;
    QRadioButton *radioButton_Bourget;
    QRadioButton *radioButton_NY;
    QRadioButton *radioButton_Vladivostock;
    QVBoxLayout *verticalLayout_19;
    QVBoxLayout *verticalLayout_22;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_18;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButton_Printemps;
    QRadioButton *radioButton_Ete;
    QRadioButton *radioButton_Automne;
    QRadioButton *radioButton_Hiver;
    QLabel *label_saison;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_dirigeable;
    QLCDNumber *lcdNumber_charge;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *pushButton_DimAuto;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *pushButton_DimManu;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_Retour;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 800);
        MainWindow->setMaximumSize(QSize(1280, 800));
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
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
        verticalLayout_3->setContentsMargins(-1, 5, -1, -1);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_12->setContentsMargins(5, -1, -1, -1);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(300, 50));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color:lightgreen"));

        verticalLayout_12->addWidget(label);


        verticalLayout_10->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_11->setContentsMargins(5, -1, -1, -1);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setFont(font1);
        lineEdit->setMouseTracking(false);
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius:20px"));
        lineEdit->setFrame(false);

        verticalLayout_11->addWidget(lineEdit);


        verticalLayout_10->addLayout(verticalLayout_11);

        verticalLayout_10->setStretch(0, 10);
        verticalLayout_10->setStretch(1, 90);

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
        label_2->setMaximumSize(QSize(300, 50));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color:red"));

        verticalLayout_14->addWidget(label_2);


        verticalLayout_13->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        radioButton_Bourget = new QRadioButton(centralWidget);
        radioButton_Bourget->setObjectName(QString::fromUtf8("radioButton_Bourget"));
        QFont font2;
        font2.setPointSize(12);
        font2.setKerning(true);
        radioButton_Bourget->setFont(font2);

        verticalLayout_15->addWidget(radioButton_Bourget);

        radioButton_NY = new QRadioButton(centralWidget);
        radioButton_NY->setObjectName(QString::fromUtf8("radioButton_NY"));
        radioButton_NY->setFont(font);
        radioButton_NY->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_15->addWidget(radioButton_NY);

        radioButton_Vladivostock = new QRadioButton(centralWidget);
        radioButton_Vladivostock->setObjectName(QString::fromUtf8("radioButton_Vladivostock"));
        radioButton_Vladivostock->setFont(font);
        radioButton_Vladivostock->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_15->addWidget(radioButton_Vladivostock);


        verticalLayout_13->addLayout(verticalLayout_15);

        verticalLayout_13->setStretch(0, 10);
        verticalLayout_13->setStretch(1, 90);

        horizontalLayout_7->addLayout(verticalLayout_13);


        horizontalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_5->setStretch(0, 50);
        horizontalLayout_5->setStretch(1, 50);

        verticalLayout_8->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(5, -1, -1, -1);
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        verticalLayout_22->addWidget(label_3);


        verticalLayout_19->addLayout(verticalLayout_22);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMaximumSize(QSize(623, 228));
        horizontalLayout_8 = new QHBoxLayout(groupBox_2);
        horizontalLayout_8->setSpacing(10);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_5->setContentsMargins(10, -1, 10, -1);
        radioButton_Printemps = new QRadioButton(groupBox_2);
        radioButton_Printemps->setObjectName(QString::fromUtf8("radioButton_Printemps"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioButton_Printemps->sizePolicy().hasHeightForWidth());
        radioButton_Printemps->setSizePolicy(sizePolicy1);
        radioButton_Printemps->setMaximumSize(QSize(200, 40));
        radioButton_Printemps->setFont(font);
        radioButton_Printemps->setAutoFillBackground(false);
        radioButton_Printemps->setStyleSheet(QString::fromUtf8("spacing: 10px;\n"
"\n"
"\n"
""));
        radioButton_Printemps->setChecked(true);

        verticalLayout_5->addWidget(radioButton_Printemps);

        radioButton_Ete = new QRadioButton(groupBox_2);
        radioButton_Ete->setObjectName(QString::fromUtf8("radioButton_Ete"));
        sizePolicy1.setHeightForWidth(radioButton_Ete->sizePolicy().hasHeightForWidth());
        radioButton_Ete->setSizePolicy(sizePolicy1);
        radioButton_Ete->setMaximumSize(QSize(200, 40));
        radioButton_Ete->setCursor(QCursor(Qt::ArrowCursor));
        radioButton_Ete->setAutoFillBackground(false);
        radioButton_Ete->setStyleSheet(QString::fromUtf8("spacing: 10px;"));

        verticalLayout_5->addWidget(radioButton_Ete);

        radioButton_Automne = new QRadioButton(groupBox_2);
        radioButton_Automne->setObjectName(QString::fromUtf8("radioButton_Automne"));
        sizePolicy1.setHeightForWidth(radioButton_Automne->sizePolicy().hasHeightForWidth());
        radioButton_Automne->setSizePolicy(sizePolicy1);
        radioButton_Automne->setMaximumSize(QSize(200, 40));
        radioButton_Automne->setStyleSheet(QString::fromUtf8("spacing: 10px;"));

        verticalLayout_5->addWidget(radioButton_Automne);

        radioButton_Hiver = new QRadioButton(groupBox_2);
        radioButton_Hiver->setObjectName(QString::fromUtf8("radioButton_Hiver"));
        sizePolicy1.setHeightForWidth(radioButton_Hiver->sizePolicy().hasHeightForWidth());
        radioButton_Hiver->setSizePolicy(sizePolicy1);
        radioButton_Hiver->setMaximumSize(QSize(200, 40));
        radioButton_Hiver->setStyleSheet(QString::fromUtf8("spacing: 10px;"));

        verticalLayout_5->addWidget(radioButton_Hiver);


        horizontalLayout_8->addLayout(verticalLayout_5);

        label_saison = new QLabel(groupBox_2);
        label_saison->setObjectName(QString::fromUtf8("label_saison"));
        sizePolicy.setHeightForWidth(label_saison->sizePolicy().hasHeightForWidth());
        label_saison->setSizePolicy(sizePolicy);
        label_saison->setMaximumSize(QSize(200, 200));
        label_saison->setPixmap(QPixmap(QString::fromUtf8(":/images/images/printemps.png")));
        label_saison->setScaledContents(true);

        horizontalLayout_8->addWidget(label_saison);


        verticalLayout_18->addWidget(groupBox_2);


        verticalLayout_19->addLayout(verticalLayout_18);

        verticalLayout_19->setStretch(0, 10);
        verticalLayout_19->setStretch(1, 90);

        verticalLayout_3->addLayout(verticalLayout_19);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(5, -1, -1, -1);
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        verticalLayout_17->addWidget(label_6);


        verticalLayout_7->addLayout(verticalLayout_17);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        label_dirigeable = new QLabel(centralWidget);
        label_dirigeable->setObjectName(QString::fromUtf8("label_dirigeable"));
        sizePolicy1.setHeightForWidth(label_dirigeable->sizePolicy().hasHeightForWidth());
        label_dirigeable->setSizePolicy(sizePolicy1);
        label_dirigeable->setMaximumSize(QSize(650, 150));
        label_dirigeable->setPixmap(QPixmap(QString::fromUtf8(":/images/images/blimp-moyen.png")));
        label_dirigeable->setScaledContents(true);
        label_dirigeable->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(label_dirigeable);

        lcdNumber_charge = new QLCDNumber(centralWidget);
        lcdNumber_charge->setObjectName(QString::fromUtf8("lcdNumber_charge"));

        verticalLayout_20->addWidget(lcdNumber_charge);


        verticalLayout_16->addLayout(verticalLayout_20);

        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(200);
        horizontalSlider->setSingleStep(1);
        horizontalSlider->setPageStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksAbove);
        horizontalSlider->setTickInterval(20);

        verticalLayout_16->addWidget(horizontalSlider);


        verticalLayout_7->addLayout(verticalLayout_16);

        verticalLayout_7->setStretch(0, 10);
        verticalLayout_7->setStretch(1, 90);

        verticalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_3->setStretch(0, 10);
        verticalLayout_3->setStretch(1, 40);
        verticalLayout_3->setStretch(2, 50);

        horizontalLayout_3->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 5, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 5, -1, -1);

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
        pushButton_Retour = new QPushButton(centralWidget);
        pushButton_Retour->setObjectName(QString::fromUtf8("pushButton_Retour"));
        pushButton_Retour->setMaximumSize(QSize(1280, 800));

        horizontalLayout_12->addWidget(pushButton_Retour);


        horizontalLayout_11->addLayout(horizontalLayout_12);


        verticalLayout_2->addLayout(horizontalLayout_11);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout->setStretch(0, 60);
        verticalLayout->setStretch(1, 10);
        verticalLayout->setStretch(2, 10);

        horizontalLayout_4->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2->setStretch(0, 50);
        horizontalLayout_2->setStretch(1, 50);
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
        lineEdit->setText(QApplication::translate("MainWindow", "Le Bourget", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Arriv\303\251e:", 0, QApplication::UnicodeUTF8));
        radioButton_Bourget->setText(QApplication::translate("MainWindow", "Le Bourget", 0, QApplication::UnicodeUTF8));
        radioButton_NY->setText(QApplication::translate("MainWindow", "New-York", 0, QApplication::UnicodeUTF8));
        radioButton_Vladivostock->setText(QApplication::translate("MainWindow", "Vladivostock", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "P\303\251riode de d\303\251part souhait\303\251e:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        radioButton_Printemps->setText(QApplication::translate("MainWindow", "Printemps", 0, QApplication::UnicodeUTF8));
        radioButton_Ete->setText(QApplication::translate("MainWindow", "Et\303\251", 0, QApplication::UnicodeUTF8));
        radioButton_Automne->setText(QApplication::translate("MainWindow", "Automne", 0, QApplication::UnicodeUTF8));
        radioButton_Hiver->setText(QApplication::translate("MainWindow", "Hiver", 0, QApplication::UnicodeUTF8));
        label_saison->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Poids de la charge utile:", 0, QApplication::UnicodeUTF8));
        label_dirigeable->setText(QString());
        pushButton_DimAuto->setText(QApplication::translate("MainWindow", "Dimensionnement  \n"
" Automatique", 0, QApplication::UnicodeUTF8));
        pushButton_DimManu->setText(QApplication::translate("MainWindow", "Dimensionnement \n"
" Manuel", 0, QApplication::UnicodeUTF8));
        pushButton_Retour->setText(QApplication::translate("MainWindow", "Retour", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
