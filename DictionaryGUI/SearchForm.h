#pragma once
#include <QWidget>
#include "ui_SearchForm.h"


class SearchForm : public QWidget
{
	Q_OBJECT

public:
	SearchForm(QWidget *parent = Q_NULLPTR);
	~SearchForm();
private slots:
	void on_Search_Button_clicked();
private:
	Ui::SearchForm ui;
};
