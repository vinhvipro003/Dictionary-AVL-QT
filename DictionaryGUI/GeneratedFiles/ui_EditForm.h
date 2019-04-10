/********************************************************************************
** Form generated from reading UI file 'EditForm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITFORM_H
#define UI_EDITFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditForm
{
public:
    QPushButton *Back_Button;
    QTextBrowser *header;
    QTextEdit *Edit_Mean;
    QLineEdit *Edit_Word;
    QPushButton *Edit_Button;

    void setupUi(QWidget *EditForm)
    {
        if (EditForm->objectName().isEmpty())
            EditForm->setObjectName(QStringLiteral("EditForm"));
        EditForm->resize(430, 402);
        Back_Button = new QPushButton(EditForm);
        Back_Button->setObjectName(QStringLiteral("Back_Button"));
        Back_Button->setGeometry(QRect(120, 320, 75, 23));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Back_Button->setFont(font);
        header = new QTextBrowser(EditForm);
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
        Edit_Mean = new QTextEdit(EditForm);
        Edit_Mean->setObjectName(QStringLiteral("Edit_Mean"));
        Edit_Mean->setGeometry(QRect(120, 120, 211, 111));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        Edit_Mean->setFont(font2);
        Edit_Word = new QLineEdit(EditForm);
        Edit_Word->setObjectName(QStringLiteral("Edit_Word"));
        Edit_Word->setGeometry(QRect(120, 70, 211, 41));
        QFont font3;
        font3.setPointSize(12);
        Edit_Word->setFont(font3);
        Edit_Button = new QPushButton(EditForm);
        Edit_Button->setObjectName(QStringLiteral("Edit_Button"));
        Edit_Button->setGeometry(QRect(180, 240, 101, 41));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        Edit_Button->setFont(font4);
        header->raise();
        Back_Button->raise();
        Edit_Mean->raise();
        Edit_Word->raise();
        Edit_Button->raise();

        retranslateUi(EditForm);
        QObject::connect(Back_Button, SIGNAL(clicked()), EditForm, SLOT(close()));

        QMetaObject::connectSlotsByName(EditForm);
    } // setupUi

    void retranslateUi(QWidget *EditForm)
    {
        EditForm->setWindowTitle(QApplication::translate("EditForm", "EditForm", nullptr));
        Back_Button->setText(QApplication::translate("EditForm", "BACK", nullptr));
#ifndef QT_NO_TOOLTIP
        header->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        header->setHtml(QApplication::translate("EditForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\" bgcolor=\"#eecff0\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#ff0000;\">DICTIONARY</span></p></body></html>", nullptr));
        Edit_Mean->setPlaceholderText(QApplication::translate("EditForm", "Input mean of word", nullptr));
        Edit_Word->setInputMask(QString());
        Edit_Word->setText(QString());
        Edit_Word->setPlaceholderText(QApplication::translate("EditForm", "Input word to edit", nullptr));
        Edit_Button->setText(QApplication::translate("EditForm", "EDIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditForm: public Ui_EditForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITFORM_H
