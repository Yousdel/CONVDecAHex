#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "conv.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    on_spinBox_valueChanged(0x0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionSalir_triggered()
{
    close();
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    Conv conv(this);
    ui->result_label->setText(conv.convert(arg1));
}
