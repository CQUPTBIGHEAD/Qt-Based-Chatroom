/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;

    void setupUi(QWidget *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName("Chat");
        Chat->resize(670, 550);
        Chat->setStyleSheet(QString::fromUtf8(""));
        textEdit = new QTextEdit(Chat);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 410, 670, 141));
        textEdit->setStyleSheet(QString::fromUtf8("border:none;"));
        pushButton = new QPushButton(Chat);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(520, 510, 90, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(99, 188, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:14px;\n"
"}\n"
""));
        listWidget = new QListWidget(Chat);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 0, 670, 350));
        scrollArea = new QScrollArea(Chat);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 350, 670, 200));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 668, 198));
        horizontalLayoutWidget = new QWidget(scrollAreaWidgetContents_2);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 179, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolButton = new QToolButton(horizontalLayoutWidget);
        toolButton->setObjectName("toolButton");

        horizontalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(horizontalLayoutWidget);
        toolButton_2->setObjectName("toolButton_2");

        horizontalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(horizontalLayoutWidget);
        toolButton_3->setObjectName("toolButton_3");

        horizontalLayout->addWidget(toolButton_3);

        scrollArea->setWidget(scrollAreaWidgetContents_2);
        listWidget->raise();
        scrollArea->raise();
        textEdit->raise();
        pushButton->raise();

        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QWidget *Chat)
    {
        Chat->setWindowTitle(QCoreApplication::translate("Chat", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Chat", "\345\217\221\351\200\201", nullptr));
        toolButton->setText(QString());
        toolButton_2->setText(QCoreApplication::translate("Chat", "...", nullptr));
        toolButton_3->setText(QCoreApplication::translate("Chat", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
