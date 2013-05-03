/********************************************************************************
** Form generated from reading UI file 'assemblage.ui'
**
** Created: Fri 3. May 09:49:03 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSEMBLAGE_H
#define UI_ASSEMBLAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Assemblage
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_5;

    void setupUi(QWidget *Assemblage)
    {
        if (Assemblage->objectName().isEmpty())
            Assemblage->setObjectName(QString::fromUtf8("Assemblage"));
        Assemblage->resize(1280, 800);
        verticalLayout_2 = new QVBoxLayout(Assemblage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        verticalLayout->addLayout(verticalLayout_3);

        label = new QLabel(Assemblage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/blimp_cao_2.png")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_2 = new QLabel(Assemblage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_2);


        verticalLayout_5->addLayout(verticalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(Assemblage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(200, 70));

        horizontalLayout_3->addWidget(pushButton);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2 = new QPushButton(Assemblage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(200, 70));

        horizontalLayout_2->addWidget(pushButton_2);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_3 = new QPushButton(Assemblage);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(100, 20));
        pushButton_3->setMaximumSize(QSize(200, 70));

        horizontalLayout_4->addWidget(pushButton_3);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton_4 = new QPushButton(Assemblage);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(1280, 800));
        pushButton_4->setFont(font);

        verticalLayout_4->addWidget(pushButton_4);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        pushButton_5 = new QPushButton(Assemblage);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(1280, 800));
        pushButton_5->setFont(font);

        verticalLayout_7->addWidget(pushButton_5);


        horizontalLayout->addLayout(verticalLayout_7);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2->setStretch(1, 20);

        retranslateUi(Assemblage);

        QMetaObject::connectSlotsByName(Assemblage);
    } // setupUi

    void retranslateUi(QWidget *Assemblage)
    {
        Assemblage->setWindowTitle(QApplication::translate("Assemblage", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("Assemblage", "Assemblage", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Assemblage", "Phase 1", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Assemblage", "Phase 2", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Assemblage", "Phase 3", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Assemblage", "Simuler", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Assemblage", "Retour", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Assemblage: public Ui_Assemblage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSEMBLAGE_H
