/********************************************************************************
** Form generated from reading UI file 'SearchForm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHFORM_H
#define UI_SEARCHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchForm
{
public:
    QTextBrowser *header;
    QLineEdit *Search_Textbox;
    QPushButton *Search_Button;
    QPushButton *Back_Button;
    QTextBrowser *Search_Result;

    void setupUi(QWidget *SearchForm)
    {
        if (SearchForm->objectName().isEmpty())
            SearchForm->setObjectName(QStringLiteral("SearchForm"));
        SearchForm->resize(430, 402);
        header = new QTextBrowser(SearchForm);
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
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        header->setFont(font);
        header->setMouseTracking(false);
        header->setFocusPolicy(Qt::StrongFocus);
        header->setAcceptDrops(true);
        Search_Textbox = new QLineEdit(SearchForm);
        Search_Textbox->setObjectName(QStringLiteral("Search_Textbox"));
        Search_Textbox->setGeometry(QRect(120, 70, 211, 41));
        QFont font1;
        font1.setPointSize(12);
        Search_Textbox->setFont(font1);
        Search_Button = new QPushButton(SearchForm);
        Search_Button->setObjectName(QStringLiteral("Search_Button"));
        Search_Button->setGeometry(QRect(160, 130, 131, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        Search_Button->setFont(font2);
        Back_Button = new QPushButton(SearchForm);
        Back_Button->setObjectName(QStringLiteral("Back_Button"));
        Back_Button->setGeometry(QRect(120, 320, 75, 23));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        Back_Button->setFont(font3);
        Search_Result = new QTextBrowser(SearchForm);
        Search_Result->setObjectName(QStringLiteral("Search_Result"));
        Search_Result->setGeometry(QRect(120, 180, 211, 111));
        Search_Result->setFont(font1);

        retranslateUi(SearchForm);
        QObject::connect(Back_Button, SIGNAL(clicked()), SearchForm, SLOT(close()));

        QMetaObject::connectSlotsByName(SearchForm);
    } // setupUi

    void retranslateUi(QWidget *SearchForm)
    {
        SearchForm->setWindowTitle(QApplication::translate("SearchForm", "SearchForm", nullptr));
#ifndef QT_NO_TOOLTIP
        header->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        header->setHtml(QApplication::translate("SearchForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\" bgcolor=\"#eecff0\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#ff0000;\">DICTIONARY</span></p></body></html>", nullptr));
        Search_Textbox->setInputMask(QString());
        Search_Textbox->setText(QString());
        Search_Textbox->setPlaceholderText(QApplication::translate("SearchForm", "Input word to search", nullptr));
        Search_Button->setText(QApplication::translate("SearchForm", "SEARCH", nullptr));
        Back_Button->setText(QApplication::translate("SearchForm", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchForm: public Ui_SearchForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHFORM_H
