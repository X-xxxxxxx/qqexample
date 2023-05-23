#pragma once

#include <QtWidgets/QDialog>
#include "ui_qqexample.h"

#include "Drawer.h"

class qqexample : public QDialog
{
    Q_OBJECT

public:
    qqexample(QWidget *parent = nullptr);
    ~qqexample();

private:
    Ui::qqexampleClass ui;

};
