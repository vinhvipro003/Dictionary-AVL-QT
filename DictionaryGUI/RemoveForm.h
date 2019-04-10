#pragma once

#include <QWidget>
#include "ui_RemoveForm.h"

class RemoveForm : public QWidget
{
	Q_OBJECT

public:
	RemoveForm(QWidget *parent = Q_NULLPTR);
	~RemoveForm();
private slots:
	void on_Remove_Button_clicked();
private:
	Ui::RemoveForm ui;
};
