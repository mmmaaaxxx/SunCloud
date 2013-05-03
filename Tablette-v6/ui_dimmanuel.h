/********************************************************************************
** Form generated from reading UI file 'dimmanuel.ui'
**
** Created: Fri 3. May 09:49:03 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIMMANUEL_H
#define UI_DIMMANUEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DimManuel
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_parametre1;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_parametre2;
    QSlider *horizontalSlider_2;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_parametre3;
    QSlider *horizontalSlider_3;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_parametre4;
    QSlider *horizontalSlider_4;
    QHBoxLayout *horizontalLayout_21;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_parametre5;
    QSlider *horizontalSlider_5;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_parametre6;
    QSlider *horizontalSlider_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *pushButton_Retour;

    void setupUi(QWidget *DimManuel)
    {
        if (DimManuel->objectName().isEmpty())
            DimManuel->setObjectName(QString::fromUtf8("DimManuel"));
        DimManuel->resize(1280, 800);
        horizontalLayout_2 = new QHBoxLayout(DimManuel);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetFixedSize);
        label_2 = new QLabel(DimManuel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(200, 16777215));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_2);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_parametre1 = new QLabel(DimManuel);
        label_parametre1->setObjectName(QString::fromUtf8("label_parametre1"));
        label_parametre1->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_parametre1);

        horizontalSlider = new QSlider(DimManuel);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximumSize(QSize(300, 100));
        horizontalSlider->setMouseTracking(true);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setPageStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::NoTicks);

        verticalLayout_2->addWidget(horizontalSlider);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalLayout_5->setStretch(0, 50);
        horizontalLayout_5->setStretch(1, 50);

        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setSizeConstraint(QLayout::SetFixedSize);
        label_3 = new QLabel(DimManuel);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(200, 16777215));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_3);


        horizontalLayout_11->addLayout(horizontalLayout_14);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_parametre2 = new QLabel(DimManuel);
        label_parametre2->setObjectName(QString::fromUtf8("label_parametre2"));
        label_parametre2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_parametre2);

        horizontalSlider_2 = new QSlider(DimManuel);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMaximumSize(QSize(300, 100));
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setPageStep(1);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider_2);


        horizontalLayout_11->addLayout(verticalLayout_4);

        horizontalLayout_11->setStretch(0, 50);
        horizontalLayout_11->setStretch(1, 50);

        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setSizeConstraint(QLayout::SetFixedSize);
        label_4 = new QLabel(DimManuel);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(200, 16777215));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_4);


        horizontalLayout_12->addLayout(horizontalLayout_13);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_parametre3 = new QLabel(DimManuel);
        label_parametre3->setObjectName(QString::fromUtf8("label_parametre3"));
        label_parametre3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_parametre3);

        horizontalSlider_3 = new QSlider(DimManuel);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setMaximumSize(QSize(300, 100));
        horizontalSlider_3->setMaximum(100);
        horizontalSlider_3->setPageStep(1);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(horizontalSlider_3);


        horizontalLayout_12->addLayout(verticalLayout_5);

        horizontalLayout_12->setStretch(0, 50);
        horizontalLayout_12->setStretch(1, 50);

        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setSizeConstraint(QLayout::SetFixedSize);
        label_5 = new QLabel(DimManuel);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(200, 16777215));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_5);


        horizontalLayout_10->addLayout(horizontalLayout_15);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_parametre4 = new QLabel(DimManuel);
        label_parametre4->setObjectName(QString::fromUtf8("label_parametre4"));
        label_parametre4->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_parametre4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_parametre4);

        horizontalSlider_4 = new QSlider(DimManuel);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setMaximumSize(QSize(300, 100));
        horizontalSlider_4->setMaximum(100);
        horizontalSlider_4->setPageStep(1);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(horizontalSlider_4);


        horizontalLayout_10->addLayout(verticalLayout_6);

        horizontalLayout_10->setStretch(0, 50);
        horizontalLayout_10->setStretch(1, 50);

        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setSizeConstraint(QLayout::SetFixedSize);
        label_7 = new QLabel(DimManuel);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(200, 16777215));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(label_7);


        horizontalLayout_21->addLayout(horizontalLayout_23);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_parametre5 = new QLabel(DimManuel);
        label_parametre5->setObjectName(QString::fromUtf8("label_parametre5"));
        label_parametre5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_parametre5);

        horizontalSlider_5 = new QSlider(DimManuel);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setMaximumSize(QSize(300, 100));
        horizontalSlider_5->setMaximum(100);
        horizontalSlider_5->setPageStep(1);
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(horizontalSlider_5);


        horizontalLayout_21->addLayout(verticalLayout_7);

        horizontalLayout_21->setStretch(0, 50);
        horizontalLayout_21->setStretch(1, 50);

        verticalLayout_3->addLayout(horizontalLayout_21);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setSizeConstraint(QLayout::SetFixedSize);
        label_6 = new QLabel(DimManuel);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(200, 16777215));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(label_6);


        horizontalLayout_18->addLayout(horizontalLayout_20);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_parametre6 = new QLabel(DimManuel);
        label_parametre6->setObjectName(QString::fromUtf8("label_parametre6"));
        label_parametre6->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_parametre6);

        horizontalSlider_6 = new QSlider(DimManuel);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setMaximumSize(QSize(300, 100));
        horizontalSlider_6->setMaximum(100);
        horizontalSlider_6->setPageStep(1);
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(horizontalSlider_6);


        horizontalLayout_18->addLayout(verticalLayout_8);

        horizontalLayout_18->setStretch(0, 50);
        horizontalLayout_18->setStretch(1, 50);

        verticalLayout_3->addLayout(horizontalLayout_18);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(DimManuel);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(1280, 800));

        horizontalLayout->addWidget(pushButton);


        horizontalLayout_17->addLayout(horizontalLayout);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        pushButton_Retour = new QPushButton(DimManuel);
        pushButton_Retour->setObjectName(QString::fromUtf8("pushButton_Retour"));
        pushButton_Retour->setMaximumSize(QSize(1280, 800));

        horizontalLayout_16->addWidget(pushButton_Retour);


        horizontalLayout_17->addLayout(horizontalLayout_16);


        verticalLayout->addLayout(horizontalLayout_17);

        verticalLayout->setStretch(0, 80);
        verticalLayout->setStretch(1, 20);

        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 70);
        horizontalLayout_2->setStretch(1, 30);

        retranslateUi(DimManuel);

        QMetaObject::connectSlotsByName(DimManuel);
    } // setupUi

    void retranslateUi(QWidget *DimManuel)
    {
        DimManuel->setWindowTitle(QApplication::translate("DimManuel", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DimManuel", "Param\303\250tre 1:", 0, QApplication::UnicodeUTF8));
        label_parametre1->setText(QApplication::translate("DimManuel", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DimManuel", "Param\303\250tre 2:", 0, QApplication::UnicodeUTF8));
        label_parametre2->setText(QApplication::translate("DimManuel", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DimManuel", "Param\303\250tre 3:", 0, QApplication::UnicodeUTF8));
        label_parametre3->setText(QApplication::translate("DimManuel", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DimManuel", "Param\303\250tre 4:", 0, QApplication::UnicodeUTF8));
        label_parametre4->setText(QApplication::translate("DimManuel", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DimManuel", "Param\303\250tre 5:", 0, QApplication::UnicodeUTF8));
        label_parametre5->setText(QApplication::translate("DimManuel", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DimManuel", "Param\303\250tre 6:", 0, QApplication::UnicodeUTF8));
        label_parametre6->setText(QApplication::translate("DimManuel", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DimManuel", "Simuler", 0, QApplication::UnicodeUTF8));
        pushButton_Retour->setText(QApplication::translate("DimManuel", "Retour", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DimManuel: public Ui_DimManuel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIMMANUEL_H
