/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created: Tue 16. Apr 17:49:55 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

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
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QPushButton *pushButton_lancer;
    QLabel *Titre_Perturbations;
    QSpinBox *spinBox_duree;
    QLabel *label_duree;
    QCheckBox *checkBox_duree_infinie;
    QCheckBox *checkBox;
    QSlider *horizontalSlider;
    QLCDNumber *lcdNumber;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->setEnabled(true);
        Form->resize(1280, 800);
        horizontalLayoutWidget = new QWidget(Form);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 1281, 201));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(horizontalLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        pushButton_lancer = new QPushButton(groupBox);
        pushButton_lancer->setObjectName(QString::fromUtf8("pushButton_lancer"));
        pushButton_lancer->setGeometry(QRect(360, 70, 221, 51));
        QFont font;
        font.setPointSize(13);
        pushButton_lancer->setFont(font);
        Titre_Perturbations = new QLabel(groupBox);
        Titre_Perturbations->setObjectName(QString::fromUtf8("Titre_Perturbations"));
        Titre_Perturbations->setGeometry(QRect(470, 10, 281, 51));
        QFont font1;
        font1.setPointSize(16);
        Titre_Perturbations->setFont(font1);
        Titre_Perturbations->setAlignment(Qt::AlignCenter);
        spinBox_duree = new QSpinBox(groupBox);
        spinBox_duree->setObjectName(QString::fromUtf8("spinBox_duree"));
        spinBox_duree->setGeometry(QRect(710, 60, 141, 71));
        QFont font2;
        font2.setPointSize(21);
        spinBox_duree->setFont(font2);
        label_duree = new QLabel(groupBox);
        label_duree->setObjectName(QString::fromUtf8("label_duree"));
        label_duree->setGeometry(QRect(830, 70, 191, 61));
        QFont font3;
        font3.setPointSize(12);
        label_duree->setFont(font3);
        label_duree->setAlignment(Qt::AlignCenter);
        checkBox_duree_infinie = new QCheckBox(groupBox);
        checkBox_duree_infinie->setObjectName(QString::fromUtf8("checkBox_duree_infinie"));
        checkBox_duree_infinie->setGeometry(QRect(720, 140, 121, 61));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBox_duree_infinie->sizePolicy().hasHeightForWidth());
        checkBox_duree_infinie->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setPointSize(15);
        checkBox_duree_infinie->setFont(font4);

        horizontalLayout->addWidget(groupBox);

        checkBox = new QCheckBox(Form);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(180, 340, 531, 21));
        horizontalSlider = new QSlider(Form);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(40, 270, 821, 71));
        horizontalSlider->setMaximum(360);
        horizontalSlider->setValue(180);
        horizontalSlider->setOrientation(Qt::Horizontal);
        lcdNumber = new QLCDNumber(Form);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(910, 260, 151, 101));
        lcdNumber->setProperty("intValue", QVariant(0));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Form", "GroupBox", 0, QApplication::UnicodeUTF8));
        pushButton_lancer->setText(QApplication::translate("Form", "Start", 0, QApplication::UnicodeUTF8));
        Titre_Perturbations->setText(QApplication::translate("Form", "Perturbation", 0, QApplication::UnicodeUTF8));
        label_duree->setText(QApplication::translate("Form", "Dur\303\251e (sec)", 0, QApplication::UnicodeUTF8));
        checkBox_duree_infinie->setText(QApplication::translate("Form", "Infni", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Form", "accelerometre", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
