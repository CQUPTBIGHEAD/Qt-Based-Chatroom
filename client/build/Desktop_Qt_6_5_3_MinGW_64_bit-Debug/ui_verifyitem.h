/********************************************************************************
** Form generated from reading UI file 'verifyitem.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFYITEM_H
#define UI_VERIFYITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerifyItem
{
public:
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *VerifyItem)
    {
        if (VerifyItem->objectName().isEmpty())
            VerifyItem->setObjectName("VerifyItem");
        VerifyItem->resize(560, 110);
        VerifyItem->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
""));
        label_3 = new QLabel(VerifyItem);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 0, 121, 20));
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        label = new QLabel(VerifyItem);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 161, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(10);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        label_2 = new QLabel(VerifyItem);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 50, 200, 60));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));

        retranslateUi(VerifyItem);

        QMetaObject::connectSlotsByName(VerifyItem);
    } // setupUi

    void retranslateUi(QWidget *VerifyItem)
    {
        VerifyItem->setWindowTitle(QCoreApplication::translate("VerifyItem", "Form", nullptr));
        label_3->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VerifyItem: public Ui_VerifyItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFYITEM_H
