/********************************************************************************
** Form generated from reading UI file 'dimensionement.ui'
**
** Created: Mon 29. Apr 17:29:15 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIMENSIONEMENT_H
#define UI_DIMENSIONEMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dimensionement
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_pseudo;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_simulation;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *lineEdit_societe;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_2;

    void setupUi(QWidget *dimensionement)
    {
        if (dimensionement->objectName().isEmpty())
            dimensionement->setObjectName(QString::fromUtf8("dimensionement"));
        dimensionement->resize(1280, 800);
        dimensionement->setMaximumSize(QSize(1280, 803));
        QFont font;
        font.setPointSize(14);
        dimensionement->setFont(font);
        verticalLayout_2 = new QVBoxLayout(dimensionement);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(dimensionement);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(1280, 800));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-radius: 20px;\n"
"	background-color: lightgray}"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/dirigeable2.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignJustify|Qt::AlignTop);

        verticalLayout_3->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(dimensionement);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lineEdit_pseudo = new QLineEdit(dimensionement);
        lineEdit_pseudo->setObjectName(QString::fromUtf8("lineEdit_pseudo"));
        lineEdit_pseudo->setMaximumSize(QSize(1280, 800));
        lineEdit_pseudo->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"     border: 2px solid blue;\n"
"     border-radius: 20px;\n"
"     padding: 0 8px;\n"
"     background: lightblue;\n"
"     selection-background-color: darkgray;\n"
" }"));

        horizontalLayout_6->addWidget(lineEdit_pseudo);


        horizontalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(dimensionement);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_2);


        horizontalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit_simulation = new QLineEdit(dimensionement);
        lineEdit_simulation->setObjectName(QString::fromUtf8("lineEdit_simulation"));
        lineEdit_simulation->setMaximumSize(QSize(1280, 800));
        lineEdit_simulation->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"     border: 2px solid blue;\n"
"     border-radius: 20px;\n"
"     padding: 0 8px;\n"
"     background: lightblue;\n"
"     selection-background-color: darkgray;\n"
" }"));

        horizontalLayout_2->addWidget(lineEdit_simulation);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout->setStretch(0, 25);
        horizontalLayout->setStretch(1, 25);
        horizontalLayout->setStretch(2, 25);
        horizontalLayout->setStretch(3, 25);

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_4 = new QLabel(dimensionement);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_4);


        horizontalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        lineEdit_societe = new QLineEdit(dimensionement);
        lineEdit_societe->setObjectName(QString::fromUtf8("lineEdit_societe"));
        lineEdit_societe->setMaximumSize(QSize(1280, 800));
        lineEdit_societe->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"     border: 2px solid blue;\n"
"     border-radius: 20px;\n"
"     padding: 0 8px;\n"
"     background: lightblue;\n"
"     selection-background-color: darkgray;\n"
" }"));

        horizontalLayout_9->addWidget(lineEdit_societe);


        horizontalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pushButton = new QPushButton(dimensionement);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setMaximumSize(QSize(1280, 800));
        pushButton->setFont(font1);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 20px;\n"
"	background-color: lightgray}"));
        pushButton->setCheckable(false);

        horizontalLayout_11->addWidget(pushButton);


        horizontalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_2 = new QPushButton(dimensionement);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 0));
        pushButton_2->setMaximumSize(QSize(1280, 800));
        pushButton_2->setFont(font1);
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 20px;\n"
"	background-color: lightgray}"));

        horizontalLayout_7->addWidget(pushButton_2);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        horizontalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_4->setStretch(0, 25);
        horizontalLayout_4->setStretch(1, 25);
        horizontalLayout_4->setStretch(2, 25);
        horizontalLayout_4->setStretch(3, 25);

        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout_2->setStretch(0, 80);
        verticalLayout_2->setStretch(1, 10);
        verticalLayout_2->setStretch(2, 10);

        retranslateUi(dimensionement);

        QMetaObject::connectSlotsByName(dimensionement);
    } // setupUi

    void retranslateUi(QWidget *dimensionement)
    {
        dimensionement->setWindowTitle(QApplication::translate("dimensionement", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QApplication::translate("dimensionement", "Pseudo de l'utilisateur:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dimensionement", "Nom de la simulation:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("dimensionement", "Nom de la soci\303\251t\303\251:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("dimensionement", "Simulation", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("dimensionement", "Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dimensionement: public Ui_dimensionement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIMENSIONEMENT_H
