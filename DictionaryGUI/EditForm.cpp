#include "EditForm.h"
#include "DictionaryGUI.h"
#include "qmessagebox.h"
EditForm::EditForm(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

EditForm::~EditForm()
{
}
void EditForm::on_Edit_Button_clicked()
{
	string word = ui.Edit_Word->text().toStdString();
	string mean = ui.Edit_Mean->toPlainText().toStdString();
	string status =DictionaryGUI::tree->edit(word, mean);
	QMessageBox::information(this, tr("Dictionary"), QString::fromStdString(status));
}
