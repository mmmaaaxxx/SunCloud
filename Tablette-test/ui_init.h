/********************************************************************************
** Form generated from reading UI file 'init.ui'
**
** Created: Tue 16. Apr 15:59:34 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INIT_H
#define UI_INIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_init
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;

    void setupUi(QWidget *init)
    {
        if (init->objectName().isEmpty())
            init->setObjectName(QString::fromUtf8("init"));
        init->resize(1202, 802);
        init->setMaximumSize(QSize(1202, 802));
        QFont font;
        font.setKerning(false);
        init->setFont(font);
        verticalLayout_2 = new QVBoxLayout(init);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(init);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(1280, 800));
        pushButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/dirigeable.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(1280, 800));
        pushButton->setAutoRepeatDelay(300);
        pushButton->setAutoDefault(false);

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(init);

        QMetaObject::connectSlotsByName(init);
    } // setupUi

    void retranslateUi(QWidget *init)
    {
        init->setWindowTitle(QApplication::translate("init", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class init: public Ui_init {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INIT_H
