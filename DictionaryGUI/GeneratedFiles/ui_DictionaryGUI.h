/********************************************************************************
** Form generated from reading UI file 'DictionaryGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DICTIONARYGUI_H
#define UI_DICTIONARYGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DictionaryGUIClass
{
public:
    QWidget *centralWidget;
    QPushButton *Search_button;
    QPushButton *Edit_button;
    QPushButton *Remove_button;
    QPushButton *Add_button;
    QPushButton *Load_button;
    QPushButton *Save_button;
    QTextBrowser *header;
    QPushButton *Exit_button;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DictionaryGUIClass)
    {
        if (DictionaryGUIClass->objectName().isEmpty())
            DictionaryGUIClass->setObjectName(QStringLiteral("DictionaryGUIClass"));
        DictionaryGUIClass->resize(432, 402);
        centralWidget = new QWidget(DictionaryGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Search_button = new QPushButton(centralWidget);
        Search_button->setObjectName(QStringLiteral("Search_button"));
        Search_button->setEnabled(true);
        Search_button->setGeometry(QRect(120, 70, 199, 35));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        Search_button->setFont(font);
        Search_button->setAcceptDrops(false);
        Edit_button = new QPushButton(centralWidget);
        Edit_button->setObjectName(QStringLiteral("Edit_button"));
        Edit_button->setEnabled(true);
        Edit_button->setGeometry(QRect(120, 110, 199, 35));
        Edit_button->setFont(font);
        Edit_button->setAcceptDrops(false);
        Remove_button = new QPushButton(centralWidget);
        Remove_button->setObjectName(QStringLiteral("Remove_button"));
        Remove_button->setEnabled(true);
        Remove_button->setGeometry(QRect(120, 190, 199, 35));
        Remove_button->setFont(font);
        Remove_button->setAcceptDrops(false);
        Add_button = new QPushButton(centralWidget);
        Add_button->setObjectName(QStringLiteral("Add_button"));
        Add_button->setEnabled(true);
        Add_button->setGeometry(QRect(120, 150, 199, 35));
        Add_button->setFont(font);
        Add_button->setAcceptDrops(false);
        Load_button = new QPushButton(centralWidget);
        Load_button->setObjectName(QStringLiteral("Load_button"));
        Load_button->setEnabled(true);
        Load_button->setGeometry(QRect(120, 230, 199, 35));
        Load_button->setFont(font);
        Load_button->setAcceptDrops(false);
        Save_button = new QPushButton(centralWidget);
        Save_button->setObjectName(QStringLiteral("Save_button"));
        Save_button->setEnabled(true);
        Save_button->setGeometry(QRect(120, 270, 199, 35));
        Save_button->setFont(font);
        Save_button->setAcceptDrops(false);
        header = new QTextBrowser(centralWidget);
        header->setObjectName(QStringLiteral("header"));
        header->setEnabled(true);
        header->setGeometry(QRect(90, 20, 261, 341));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        header->setPalette(palette);
        QFont font1;
        font1.setStyleStrategy(QFont::PreferAntialias);
        header->setFont(font1);
        header->setMouseTracking(false);
        header->setFocusPolicy(Qt::StrongFocus);
        header->setAcceptDrops(true);
        Exit_button = new QPushButton(centralWidget);
        Exit_button->setObjectName(QStringLiteral("Exit_button"));
        Exit_button->setEnabled(true);
        Exit_button->setGeometry(QRect(120, 310, 199, 35));
        Exit_button->setFont(font);
        Exit_button->setAcceptDrops(false);
        DictionaryGUIClass->setCentralWidget(centralWidget);
        header->raise();
        Search_button->raise();
        Edit_button->raise();
        Remove_button->raise();
        Add_button->raise();
        Load_button->raise();
        Save_button->raise();
        Exit_button->raise();
        mainToolBar = new QToolBar(DictionaryGUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DictionaryGUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DictionaryGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DictionaryGUIClass->setStatusBar(statusBar);

        retranslateUi(DictionaryGUIClass);
        QObject::connect(Exit_button, SIGNAL(clicked()), DictionaryGUIClass, SLOT(close()));

        QMetaObject::connectSlotsByName(DictionaryGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *DictionaryGUIClass)
    {
        DictionaryGUIClass->setWindowTitle(QApplication::translate("DictionaryGUIClass", "DictionaryGUI", nullptr));
        Search_button->setText(QApplication::translate("DictionaryGUIClass", "Search", nullptr));
        Edit_button->setText(QApplication::translate("DictionaryGUIClass", "Edit", nullptr));
        Remove_button->setText(QApplication::translate("DictionaryGUIClass", "Remove", nullptr));
        Add_button->setText(QApplication::translate("DictionaryGUIClass", "Insert word", nullptr));
        Load_button->setText(QApplication::translate("DictionaryGUIClass", "Load Dictionary", nullptr));
        Save_button->setText(QApplication::translate("DictionaryGUIClass", "Save dictionary", nullptr));
#ifndef QT_NO_TOOLTIP
        header->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        header->setHtml(QApplication::translate("DictionaryGUIClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\" bgcolor=\"#eecff0\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#ff0000;\">DICTIONARY</span></p></body></html>", nullptr));
        Exit_button->setText(QApplication::translate("DictionaryGUIClass", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DictionaryGUIClass: public Ui_DictionaryGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DICTIONARYGUI_H
