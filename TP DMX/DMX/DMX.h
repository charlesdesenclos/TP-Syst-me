#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DMX.h"

class DMX : public QMainWindow
{
    Q_OBJECT

public:
    DMX(QWidget *parent = nullptr);
    ~DMX();

private:
    Ui::DMXClass ui;
};
