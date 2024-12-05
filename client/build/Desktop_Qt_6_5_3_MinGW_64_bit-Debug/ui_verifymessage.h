/********************************************************************************
** Form generated from reading UI file 'verifymessage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFYMESSAGE_H
#define UI_VERIFYMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerifyMessage
{
public:
    QListWidget *listWidget;

    void setupUi(QWidget *VerifyMessage)
    {
        if (VerifyMessage->objectName().isEmpty())
            VerifyMessage->setObjectName("VerifyMessage");
        VerifyMessage->resize(560, 550);
        listWidget = new QListWidget(VerifyMessage);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 0, 560, 550));

        retranslateUi(VerifyMessage);

        QMetaObject::connectSlotsByName(VerifyMessage);
    } // setupUi

    void retranslateUi(QWidget *VerifyMessage)
    {
        VerifyMessage->setWindowTitle(QCoreApplication::translate("VerifyMessage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VerifyMessage: public Ui_VerifyMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFYMESSAGE_H
