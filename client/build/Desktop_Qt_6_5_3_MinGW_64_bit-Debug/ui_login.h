/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qt4
{
public:
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLabel *label_1;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QWidget *page;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QToolButton *toolButton_5;
    QWidget *page_2;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QWidget *qt4)
    {
        if (qt4->objectName().isEmpty())
            qt4->setObjectName("qt4");
        qt4->resize(600, 430);
        qt4->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"\n"
""));
        stackedWidget = new QStackedWidget(qt4);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 10, 580, 410));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName("stackedWidgetPage1");
        layoutWidget = new QWidget(stackedWidgetPage1);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 350, 483, 40));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(99, 188, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:14px;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(99, 188, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:14px;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(99, 188, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:14px;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_2);

        label_4 = new QLabel(stackedWidgetPage1);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 0, 580, 140));
        label_4->setMinimumSize(QSize(580, 140));
        label_4->setMaximumSize(QSize(580, 140));
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_1 = new QLabel(stackedWidgetPage1);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(245, 90, 90, 90));
        label_1->setMinimumSize(QSize(90, 90));
        label_1->setMaximumSize(QSize(90, 90));
        label_1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border-image: url(:/images/kong.jpg);\n"
"border-width:0px;\n"
"border-radius:45px;\n"
"border-style:solid;\n"
"border-color: rgb(255, 255, 255);\n"
"}"));
        lineEdit = new QLineEdit(stackedWidgetPage1);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(190, 210, 200, 25));
        lineEdit->setMinimumSize(QSize(200, 25));
        lineEdit->setMaximumSize(QSize(200, 25));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border: none; border-bottom: 1px solid rgb(34, 174, 250)\n"
"}"));
        lineEdit->setCursorPosition(0);
        lineEdit_2 = new QLineEdit(stackedWidgetPage1);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(190, 260, 200, 25));
        lineEdit_2->setMinimumSize(QSize(200, 25));
        lineEdit_2->setMaximumSize(QSize(200, 25));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border: none; border-bottom: 1px solid rgb(34, 174, 250)\n"
"}"));
        toolButton = new QToolButton(stackedWidgetPage1);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(520, 0, 30, 30));
        toolButton->setMinimumSize(QSize(30, 30));
        toolButton->setMaximumSize(QSize(30, 30));
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"border-image: url(:/images/suoxiao.png);\n"
"background-color: transparent;\n"
"}"));
        toolButton->setAutoRaise(true);
        toolButton_2 = new QToolButton(stackedWidgetPage1);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(550, 0, 30, 30));
        toolButton_2->setMinimumSize(QSize(30, 30));
        toolButton_2->setMaximumSize(QSize(30, 30));
        toolButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/yx_x.png);\n"
"background-color: transparent;"));
        toolButton_2->setAutoRaise(true);
        stackedWidget->addWidget(stackedWidgetPage1);
        page = new QWidget();
        page->setObjectName("page");
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 0, 580, 140));
        label_5->setMinimumSize(QSize(580, 140));
        label_5->setMaximumSize(QSize(580, 140));
        label_5->setStyleSheet(QString::fromUtf8(""));
        lineEdit_3 = new QLineEdit(page);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(190, 210, 200, 25));
        lineEdit_3->setMinimumSize(QSize(200, 25));
        lineEdit_3->setMaximumSize(QSize(200, 25));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border: none; border-bottom: 1px solid rgb(34, 174, 250)\n"
"}"));
        lineEdit_3->setCursorPosition(0);
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(245, 90, 90, 90));
        label_2->setMinimumSize(QSize(90, 90));
        label_2->setMaximumSize(QSize(90, 90));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border-image: url(:/images/kong.jpg);\n"
"border-width:0px;\n"
"border-radius:45px;\n"
"border-style:solid;\n"
"border-color: rgb(255, 255, 255);\n"
"}"));
        toolButton_3 = new QToolButton(page);
        toolButton_3->setObjectName("toolButton_3");
        toolButton_3->setGeometry(QRect(520, 0, 30, 30));
        toolButton_3->setMinimumSize(QSize(30, 30));
        toolButton_3->setMaximumSize(QSize(30, 30));
        toolButton_3->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"border-image: url(:/images/suoxiao.png);\n"
"background-color: transparent;\n"
"}"));
        toolButton_3->setAutoRaise(true);
        toolButton_4 = new QToolButton(page);
        toolButton_4->setObjectName("toolButton_4");
        toolButton_4->setGeometry(QRect(550, 0, 30, 30));
        toolButton_4->setMinimumSize(QSize(30, 30));
        toolButton_4->setMaximumSize(QSize(30, 30));
        toolButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/images/yx_x.png);\n"
"background-color: transparent;"));
        toolButton_4->setAutoRaise(true);
        lineEdit_4 = new QLineEdit(page);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(190, 260, 200, 25));
        lineEdit_4->setMinimumSize(QSize(200, 25));
        lineEdit_4->setMaximumSize(QSize(200, 25));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border: none; border-bottom: 1px solid rgb(34, 174, 250)\n"
"}"));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(190, 350, 200, 30));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(99, 188, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:14px;\n"
"}\n"
""));
        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(512, 378, 60, 30));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(99, 188, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:14px;\n"
"}"));
        toolButton_5 = new QToolButton(page);
        toolButton_5->setObjectName("toolButton_5");
        toolButton_5->setGeometry(QRect(360, 120, 30, 30));
        toolButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/images/J.png);\n"
"border-width:0px;\n"
"border-radius:45px;\n"
"border-style:solid;\n"
"border-color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label = new QLabel(page_2);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 580, 410));
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 190, 80, 30));
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 12pt \"\351\273\221\344\275\223\";"));
        stackedWidget->addWidget(page_2);

        retranslateUi(qt4);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qt4);
    } // setupUi

    void retranslateUi(QWidget *qt4)
    {
        qt4->setWindowTitle(QCoreApplication::translate("qt4", "qt4", nullptr));
        pushButton_3->setText(QCoreApplication::translate("qt4", "\346\263\250\345\206\214", nullptr));
        pushButton->setText(QCoreApplication::translate("qt4", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("qt4", "\351\200\200\345\207\272", nullptr));
        label_4->setText(QString());
        label_1->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("qt4", "Chat\350\264\246\345\217\267", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("qt4", "\345\257\206\347\240\201", nullptr));
        toolButton->setText(QString());
        toolButton_2->setText(QString());
        label_5->setText(QString());
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("qt4", "\346\230\265\347\247\260", nullptr));
        label_2->setText(QString());
        toolButton_3->setText(QString());
        toolButton_4->setText(QString());
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("qt4", "\345\257\206\347\240\201", nullptr));
        pushButton_4->setText(QCoreApplication::translate("qt4", "\346\263\250\345\206\214", nullptr));
        pushButton_5->setText(QCoreApplication::translate("qt4", "\350\277\224\345\233\236", nullptr));
        toolButton_5->setText(QString());
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("qt4", "\347\231\273\345\275\225\344\270\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qt4: public Ui_qt4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
