#pragma once

#include <QWidget>
#include "ui_EditForm.h"

class EditForm : public QWidget
{
	Q_OBJECT

public:
	EditForm(QWidget *parent = Q_NULLPTR);
	~EditForm();
private slots:
	void on_Edit_Button_clicked();
private:
	Ui::EditForm ui;
};
