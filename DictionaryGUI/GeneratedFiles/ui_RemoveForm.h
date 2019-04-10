/********************************************************************************
** Form generated from reading UI file 'RemoveForm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEFORM_H
#define UI_REMOVEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveForm
{
public:
    QLineEdit *Remove_Word;
    QTextBrowser *header;
    QPushButton *Remove_Button;
    QPushButton *Back_Button;

    void setupUi(QWidget *RemoveForm)
    {
        if (RemoveForm->objectName().isEmpty())
            RemoveForm->setObjectName(QStringLiteral("RemoveForm"));
        RemoveForm->resize(430, 402);
        Remove_Word = new QLineEdit(RemoveForm);
        Remove_Word->setObjectName(QStringLiteral("Remove_Word"));
        Remove_Word->setGeometry(QRect(120, 70, 211, 41));
        QFont font;
        font.setPointSize(12);
        Remove_Word->setFont(font);
        header = new QTextBrowser(RemoveForm);
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
        Remove_Button = new QPushButton(RemoveForm);
        Remove_Button->setObjectName(QStringLiteral("Remove_Button"));
        Remove_Button->setGeometry(QRect(170, 150, 101, 41));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        Remove_Button->setFont(font2);
        Back_Button = new QPushButton(RemoveForm);
        Back_Button->setObjectName(QStringLiteral("Back_Button"));
        Back_Button->setGeometry(QRect(120, 320, 75, 23));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        Back_Button->setFont(font3);
        header->raise();
        Remove_Word->raise();
        Remove_Button->raise();
        Back_Button->raise();

        retranslateUi(RemoveForm);
        QObject::connect(Back_Button, SIGNAL(clicked()), RemoveForm, SLOT(close()));

        QMetaObject::connectSlotsByName(RemoveForm);
    } // setupUi

    void retranslateUi(QWidget *RemoveForm)
    {
        RemoveForm->setWindowTitle(QApplication::translate("RemoveForm", "RemoveForm", nullptr));
        Remove_Word->setInputMask(QString());
        Remove_Word->setText(QString());
        Remove_Word->setPlaceholderText(QApplication::translate("RemoveForm", "Input word to remove", nullptr));
#ifndef QT_NO_TOOLTIP
        header->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        header->setHtml(QApplication::translate("RemoveForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\" bgcolor=\"#eecff0\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#ff0000;\">DICTIONARY</span></p></body></html>", nullptr));
        Remove_Button->setText(QApplication::translate("RemoveForm", "REMOVE", nullptr));
        Back_Button->setText(QApplication::translate("RemoveForm", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveForm: public Ui_RemoveForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEFORM_H
