/********************************************************************************
** Form generated from reading UI file 'addpanel.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPANEL_H
#define UI_ADDPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPanel
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *AddPanel)
    {
        if (AddPanel->objectName().isEmpty())
            AddPanel->setObjectName("AddPanel");
        AddPanel->resize(550, 450);
        label = new QLabel(AddPanel);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 70, 120, 30));
        label_2 = new QLabel(AddPanel);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 200, 120, 30));
        label_3 = new QLabel(AddPanel);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, 40, 140, 20));
        textEdit = new QTextEdit(AddPanel);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(240, 70, 301, 141));
        pushButton = new QPushButton(AddPanel);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 330, 60, 30));
        pushButton_2 = new QPushButton(AddPanel);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(450, 330, 60, 30));

        retranslateUi(AddPanel);

        QMetaObject::connectSlotsByName(AddPanel);
    } // setupUi

    void retranslateUi(QWidget *AddPanel)
    {
        AddPanel->setWindowTitle(QCoreApplication::translate("AddPanel", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("AddPanel", "\350\257\267\350\276\223\345\205\245\351\252\214\350\257\201\346\266\210\346\201\257\357\274\232", nullptr));
        textEdit->setHtml(QCoreApplication::translate("AddPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\210\221\346\230\257</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("AddPanel", "\346\267\273\345\212\240", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddPanel", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPanel: public Ui_AddPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPANEL_H
