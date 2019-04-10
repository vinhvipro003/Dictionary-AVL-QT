#include "AddForm.h"
#include "DictionaryGUI.h"
#include "qmessagebox.h"

AddForm::AddForm(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

AddForm::~AddForm()
{
}
void AddForm::on_Add_Button_clicked()
{
	string word = ui.Add_Word->text().toStdString();
	string mean = ui.Add_Mean->toPlainText().toStdString();
	string status = DictionaryGUI::tree->insert(word, mean);
	QMessageBox::information(this, tr("Dictionary"), QString::fromStdString(status));
}
