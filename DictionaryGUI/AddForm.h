#pragma once

#include <QWidget>
#include "ui_AddForm.h"

class AddForm : public QWidget
{
	Q_OBJECT

public:
	AddForm(QWidget *parent = Q_NULLPTR);
	~AddForm();
private slots:
	void on_Add_Button_clicked();
private:
	Ui::AddForm ui;
};
