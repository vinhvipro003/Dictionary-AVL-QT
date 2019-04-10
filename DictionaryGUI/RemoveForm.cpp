#include "RemoveForm.h"
#include "DictionaryGUI.h"
#include "qmessagebox.h"
RemoveForm::RemoveForm(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

RemoveForm::~RemoveForm()
{
}

void RemoveForm::on_Remove_Button_clicked()
{
	string word = ui.Remove_Word->text().toStdString();
	string status = DictionaryGUI::tree->remove(word);
	QMessageBox::information(this, tr("Dictionary"), QString::fromStdString(status));
}
