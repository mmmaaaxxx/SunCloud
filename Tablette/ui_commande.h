/********************************************************************************
** Form generated from reading UI file 'commande.ui'
**
** Created: Tue 16. Apr 16:14:38 2013
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
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
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
    QGridLayout *gridLayout;
    QPushButton *pushButton_camera3;
    QPushButton *pushButton_camera1;
    QPushButton *pushButton_camera2;
    QPushButton *pushButton_camera4;
    QVBoxLayout *verticalLayout_3;
    QProgressBar *progressBar;

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
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_camera3 = new QPushButton(commande);
        pushButton_camera3->setObjectName(QString::fromUtf8("pushButton_camera3"));

        gridLayout->addWidget(pushButton_camera3, 1, 0, 1, 1);

        pushButton_camera1 = new QPushButton(commande);
        pushButton_camera1->setObjectName(QString::fromUtf8("pushButton_camera1"));

        gridLayout->addWidget(pushButton_camera1, 0, 0, 1, 1);

        pushButton_camera2 = new QPushButton(commande);
        pushButton_camera2->setObjectName(QString::fromUtf8("pushButton_camera2"));

        gridLayout->addWidget(pushButton_camera2, 0, 1, 1, 1);

        pushButton_camera4 = new QPushButton(commande);
        pushButton_camera4->setObjectName(QString::fromUtf8("pushButton_camera4"));

        gridLayout->addWidget(pushButton_camera4, 1, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        progressBar = new QProgressBar(commande);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout_3->addWidget(progressBar);


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
        pushButton_camera2->setText(QApplication::translate("commande", "Cam\303\251ra 2", 0, QApplication::UnicodeUTF8));
        pushButton_camera4->setText(QApplication::translate("commande", "Cam\303\251ra 4", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class commande: public Ui_commande {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDE_H
