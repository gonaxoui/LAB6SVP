#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ShowERROR_clicked()
{
    QMessageBox::critical(this,"Error","Crit Error");
}

void MainWindow::on_showWARNING_clicked()
{
    QMessageBox::warning(this,"Warning","Warning");
}

void MainWindow::on_showINFORMATION_clicked()
{
    QMessageBox::information(this,"Information","Information");
}
