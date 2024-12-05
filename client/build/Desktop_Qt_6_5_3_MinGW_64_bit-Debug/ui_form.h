/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *widget;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget_3;
    QWidget *tab_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QListWidget *listWidget;
    QWidget *tab_4;
    QListWidget *listWidget_2;
    QWidget *page_2;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton;
    QLineEdit *lineEdit;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(340, 700);
        Form->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(Form);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 320, 680));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 290 12pt \"Microsoft YaHei\";"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 55, 190, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color:rgb(255, 255, 255);"));
        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 140, 320, 540));
        page = new QWidget();
        page->setObjectName("page");
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 10, 320, 530));
        tabWidget->setStyleSheet(QString::fromUtf8("QWidget::tab {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border-style: solid;\n"
"    border-color: rgb(255, 255, 255);\n"
"    border-bottom-width: 1px;\n"
"    border-bottom-color: rgb(255, 255, 255);\n"
"    height: 30px;\n"
"    width: 160px;\n"
"}\n"
"\n"
"QWidget::tab:selected {\n"
"    border-bottom-color: rgb(18, 183, 245);\n"
"    border-bottom-width: 2px;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName("tab");
        listWidget_3 = new QListWidget(tab);
        listWidget_3->setObjectName("listWidget_3");
        listWidget_3->setGeometry(QRect(0, 0, 320, 530));
        listWidget_3->setStyleSheet(QString::fromUtf8("QListWidget::Item{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QListWidget::Item:hover{\n"
"background-color:rgb(242, 242, 242);\n"
"}"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget_2 = new QTabWidget(tab_2);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(0, 0, 320, 510));
        tabWidget_2->setStyleSheet(QString::fromUtf8("QWidget::tab{\n"
"height:30px;\n"
"width:60px;\n"
"border:none;\n"
"}\n"
""));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        listWidget = new QListWidget(tab_3);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 0, 320, 480));
        listWidget->setStyleSheet(QString::fromUtf8("border: none;"));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        listWidget_2 = new QListWidget(tab_4);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(0, 0, 320, 480));
        listWidget_2->setStyleSheet(QString::fromUtf8("border: none;"));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab_2, QString());
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(120, 300, 93, 29));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(99, 188, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:14px;\n"
"}"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(5, 10, 320, 90));
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(232, 38, 81, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(99, 188, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:14px;\n"
"}"));
        stackedWidget->addWidget(page_2);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 320, 110));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(37, 198, 253);\n"
"\n"
""));
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(130, 10, 190, 40));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color:rgb(255, 255, 255);"));
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 10, 90, 90));
        label_4->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 110, 321, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButton = new QToolButton(layoutWidget);
        toolButton->setObjectName("toolButton");
        toolButton->setMinimumSize(QSize(27, 28));
        toolButton->setMaximumSize(QSize(27, 29));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setStyleStrategy(QFont::PreferAntialias);
        toolButton->setFont(font1);
        toolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(75, 217, 254);\n"
"border-image: url(:/images/s.png);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/lib/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(30, 30));
        toolButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(272, 28));
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(75, 217, 254);\n"
"color: rgb(0, 0, 0);\n"
"border: none; \n"
"\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_2->addWidget(lineEdit);

        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(260, 0, 30, 30));
        toolButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/suoxiao.png);\n"
"background-color: transparent;"));
        toolButton_3 = new QToolButton(widget);
        toolButton_3->setObjectName("toolButton_3");
        toolButton_3->setGeometry(QRect(290, 0, 30, 30));
        toolButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/images/yx_x.png);\n"
"background-color: transparent;"));
        label_2->raise();
        label->raise();
        stackedWidget->raise();
        label_5->raise();
        label_4->raise();
        layoutWidget->raise();
        toolButton_2->raise();
        toolButton_3->raise();

        retranslateUi(Form);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Form", "Tab 1", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("Form", "Tab 1", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("Form", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Form", "Tab 2", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Form", "\345\217\226\346\266\210", nullptr));
        label_3->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Form", "\346\267\273\345\212\240", nullptr));
        label_2->setText(QString());
        label_5->setText(QString());
        label_4->setText(QString());
        toolButton->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Form", "\346\220\234\347\264\242", nullptr));
        toolButton_2->setText(QString());
        toolButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
