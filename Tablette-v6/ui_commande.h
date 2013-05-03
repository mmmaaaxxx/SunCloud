/********************************************************************************
** Form generated from reading UI file 'commande.ui'
**
** Created: Mon 29. Apr 17:29:15 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDE_H
#define UI_COMMANDE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commande
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_camera3;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pushButton_camera1;
    QVBoxLayout *verticalLayout_14;
    QLabel *label;
    QVBoxLayout *verticalLayout_13;
    QPushButton *pushButton_camera4;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_16;
    QPushButton *pushButton_camera2;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QSlider *horizontalSlider;
    QCheckBox *checkBox;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_Retour;

    void setupUi(QWidget *commande)
    {
        if (commande->objectName().isEmpty())
            commande->setObjectName(QString::fromUtf8("commande"));
        commande->resize(1280, 800);
        verticalLayout_2 = new QVBoxLayout(commande);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(commande);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        pushButton_camera3 = new QPushButton(commande);
        pushButton_camera3->setObjectName(QString::fromUtf8("pushButton_camera3"));

        verticalLayout_7->addWidget(pushButton_camera3);


        verticalLayout_6->addLayout(verticalLayout_7);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));

        verticalLayout_6->addLayout(verticalLayout_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));

        verticalLayout_6->addLayout(verticalLayout_8);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        pushButton_camera1 = new QPushButton(commande);
        pushButton_camera1->setObjectName(QString::fromUtf8("pushButton_camera1"));

        verticalLayout_10->addWidget(pushButton_camera1);


        verticalLayout_5->addLayout(verticalLayout_10);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label = new QLabel(commande);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/blimp_dessus.png")));
        label->setScaledContents(true);
        label->setMargin(-2);

        verticalLayout_14->addWidget(label);


        verticalLayout_5->addLayout(verticalLayout_14);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        pushButton_camera4 = new QPushButton(commande);
        pushButton_camera4->setObjectName(QString::fromUtf8("pushButton_camera4"));

        verticalLayout_13->addWidget(pushButton_camera4);


        verticalLayout_5->addLayout(verticalLayout_13);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        pushButton_camera2 = new QPushButton(commande);
        pushButton_camera2->setObjectName(QString::fromUtf8("pushButton_camera2"));

        verticalLayout_16->addWidget(pushButton_camera2);


        verticalLayout_4->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));

        verticalLayout_4->addLayout(verticalLayout_17);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));

        verticalLayout_4->addLayout(verticalLayout_15);


        horizontalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout->setStretch(0, 30);
        horizontalLayout->setStretch(1, 70);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(commande);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 30, 521, 19));
        horizontalSlider->setMaximum(360);
        horizontalSlider->setOrientation(Qt::Horizontal);
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(580, 20, 251, 41));
        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(750, 20, 181, 41));
        pushButton_Retour = new QPushButton(groupBox);
        pushButton_Retour->setObjectName(QString::fromUtf8("pushButton_Retour"));
        pushButton_Retour->setGeometry(QRect(1060, 20, 121, 41));

        verticalLayout_3->addWidget(groupBox);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout->setStretch(0, 90);
        verticalLayout->setStretch(1, 10);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(commande);

        QMetaObject::connectSlotsByName(commande);
    } // setupUi

    void retranslateUi(QWidget *commande)
    {
        commande->setWindowTitle(QApplication::translate("commande", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("commande", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_camera3->setText(QApplication::translate("commande", "Cam\303\251ra 3", 0, QApplication::UnicodeUTF8));
        pushButton_camera1->setText(QApplication::translate("commande", "Cam\303\251ra 1", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton_camera4->setText(QApplication::translate("commande", "Cam\303\251ra 4", 0, QApplication::UnicodeUTF8));
        pushButton_camera2->setText(QApplication::translate("commande", "Cam\303\251ra 2", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("commande", "GroupBox", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("commande", "CheckBox", 0, QApplication::UnicodeUTF8));
        pushButton_Retour->setText(QApplication::translate("commande", "Retour", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class commande: public Ui_commande {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDE_H
