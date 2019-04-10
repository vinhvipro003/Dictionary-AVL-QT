/********************************************************************************
** Form generated from reading UI file 'AddForm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFORM_H
#define UI_ADDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddForm
{
public:
    QPushButton *Add_Button;
    QTextBrowser *header;
    QLineEdit *Add_Word;
    QTextEdit *Add_Mean;
    QPushButton *Back_Button;

    void setupUi(QWidget *AddForm)
    {
        if (AddForm->objectName().isEmpty())
            AddForm->setObjectName(QStringLiteral("AddForm"));
        AddForm->resize(430, 402);
        Add_Button = new QPushButton(AddForm);
        Add_Button->setObjectName(QStringLiteral("Add_Button"));
        Add_Button->setGeometry(QRect(150, 240, 161, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        Add_Button->setFont(font);
        header = new QTextBrowser(AddForm);
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
        Add_Word = new QLineEdit(AddForm);
        Add_Word->setObjectName(QStringLiteral("Add_Word"));
        Add_Word->setGeometry(QRect(120, 70, 211, 41));
        QFont font2;
        font2.setPointSize(12);
        Add_Word->setFont(font2);
        Add_Mean = new QTextEdit(AddForm);
        Add_Mean->setObjectName(QStringLiteral("Add_Mean"));
        Add_Mean->setGeometry(QRect(120, 120, 211, 111));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        Add_Mean->setFont(font3);
        Back_Button = new QPushButton(AddForm);
        Back_Button->setObjectName(QStringLiteral("Back_Button"));
        Back_Button->setGeometry(QRect(120, 320, 75, 23));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        Back_Button->setFont(font4);
        header->raise();
        Add_Button->raise();
        Add_Word->raise();
        Add_Mean->raise();
        Back_Button->raise();

        retranslateUi(AddForm);
        QObject::connect(Back_Button, SIGNAL(clicked()), AddForm, SLOT(close()));

        QMetaObject::connectSlotsByName(AddForm);
    } // setupUi

    void retranslateUi(QWidget *AddForm)
    {
        AddForm->setWindowTitle(QApplication::translate("AddForm", "AddForm", nullptr));
        Add_Button->setText(QApplication::translate("AddForm", "INSERT WORD", nullptr));
#ifndef QT_NO_TOOLTIP
        header->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        header->setHtml(QApplication::translate("AddForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\" bgcolor=\"#eecff0\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#ff0000;\">DICTIONARY</span></p></body></html>", nullptr));
        Add_Word->setInputMask(QString());
        Add_Word->setText(QString());
        Add_Word->setPlaceholderText(QApplication::translate("AddForm", "Input word to add", nullptr));
        Add_Mean->setPlaceholderText(QApplication::translate("AddForm", "Input mean of word", nullptr));
        Back_Button->setText(QApplication::translate("AddForm", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddForm: public Ui_AddForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFORM_H
