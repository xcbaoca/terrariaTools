#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_tItemEditer.h"

class tItemEditer : public QMainWindow
{
    Q_OBJECT

public:
    tItemEditer(QWidget *parent = nullptr);
    ~tItemEditer();

private:
    Ui::tItemEditerClass ui;
};
