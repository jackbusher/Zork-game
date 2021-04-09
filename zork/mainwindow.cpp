#include "mainwindow.h"
#include "ui_mainwindow.h"


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


void MainWindow::on_quitButton_clicked()
{
    close();
}

void MainWindow::on_mapButton_clicked()
{

}

void MainWindow::on_northButton_clicked()
{

}


void MainWindow::on_eastButton_clicked()
{

}

void MainWindow::on_southButton_clicked()
{

}

void MainWindow::on_westButton_clicked()
{

}

void MainWindow::on_attackButton_clicked()
{

}
