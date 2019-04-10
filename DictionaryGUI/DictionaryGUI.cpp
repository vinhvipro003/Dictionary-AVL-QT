#include "DictionaryGUI.h"
#include "SearchForm.h"
#include <qfiledialog.h>
#include <qmessagebox.h>
AVLTree* DictionaryGUI::tree = new AVLTree();
DictionaryGUI::DictionaryGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->sf = new SearchForm();
	this->sf->setLocale(this->locale());
	this->ef = new EditForm();
	this->ef->setLocale(this->locale());
	this->af = new AddForm();
	this->af->setLocale(this->locale());
	this->rf = new RemoveForm();
	this->rf->setLocale(this->locale());
	tree = new AVLTree();
}

void DictionaryGUI::on_Load_button_clicked() 
{
	QString qs_filename = QFileDialog::getOpenFileName(this, "Open file", "H://");
	std::string filename = qs_filename.toStdString();
	string status=tree->load(filename);
	QMessageBox::information(this, tr("Dictionary"), QString::fromStdString(status));

}

void DictionaryGUI::on_Save_button_clicked() 
{
	QString qs_filename = QFileDialog::getSaveFileName(this, "Save file", "H://", ".txt");
	std::string filename = qs_filename.toStdString();
	string status = tree->save(filename);
	QMessageBox::information(this, tr("Dictionary"), QString::fromStdString(status));
}

void DictionaryGUI::on_Search_button_clicked() 
{
	sf = new SearchForm;
	this->sf = new SearchForm();
	this->sf->setLocale(this->locale());
	sf->show();
}
