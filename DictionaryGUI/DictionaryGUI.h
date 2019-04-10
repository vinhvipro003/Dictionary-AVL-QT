#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DictionaryGUI.h"
#include "SearchForm.h"
#include "EditForm.h"
#include "AVLTree.h"
#include "AddForm.h"
#include "RemoveForm.h"

class DictionaryGUI : public QMainWindow
{
	Q_OBJECT

public:
	DictionaryGUI(QWidget *parent = Q_NULLPTR);
	~DictionaryGUI()
	{
		delete sf;
		delete ef;
		delete af;
		delete rf;
		delete tree;
	}
	static AVLTree *tree;
private:
	Ui::DictionaryGUIClass ui;
	SearchForm *sf;
	EditForm *ef;
	AddForm *af;
	RemoveForm *rf;
	
private slots:
	void on_Load_button_clicked();
	void on_Save_button_clicked();
	void on_Search_button_clicked();
	void on_Edit_button_clicked()
	{
		delete ef;
		this->ef = new EditForm();
		this->ef->setLocale(this->locale());
		ef->show();
	}
	void on_Add_button_clicked()
	{
		delete af;
		af = new AddForm;
		this->af->setLocale(this->locale());
		af->show();
	}
	void on_Remove_button_clicked()
	{
		delete rf;
		this->rf = new RemoveForm();
		this->rf->setLocale(this->locale());
		rf->show();
	}
	
};
