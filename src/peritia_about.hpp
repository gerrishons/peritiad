#pragma once

#include <memory>
#include <QDialog>

//#include "ui_OBSAbout.h"

class PeritiaAbout : public QDialog {
	Q_OBJECT

public:
	explicit PeritiaAbout(QWidget *parent = 0);

	std::unique_ptr<Ui::PeritiaAbout> ui;

private slots:
	void ShowAbout();
	void ShowAuthors();
	void ShowLicense();
};
