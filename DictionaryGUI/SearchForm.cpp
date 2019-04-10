#include "SearchForm.h"
#include "DictionaryGUI.h"

SearchForm::SearchForm(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

SearchForm::~SearchForm()
{
}
void SearchForm::on_Search_Button_clicked()
{
	string word = ui.Search_Textbox->text().toStdString();
	string mean = DictionaryGUI::tree->find(word);
	ui.Search_Result->setText(QString::fromStdString(mean));
}
