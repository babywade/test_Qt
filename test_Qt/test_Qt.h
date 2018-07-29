#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_Qt.h"

class test_Qt : public QMainWindow
{
	Q_OBJECT

public:
	test_Qt(QWidget *parent = Q_NULLPTR);

private:
	Ui::test_QtClass ui;
};
