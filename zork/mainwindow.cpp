#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Room.h"
#include "ZorkUL.h"
#include "Command.h"
#include "CommandWords.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setVisible(false);
    ui->mapButton->setVisible(false);
    ui->northButton->setVisible(false);
    ui->southButton->setVisible(false);
    ui->eastButton->setVisible(false);
    ui->westButton->setVisible(false);
    ui->attackButton->setVisible(false);
    ui->infoButton->setVisible(false);
    ui->textBox->setVisible(false);
    ui->quitButton->setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_mapButton_clicked()
{
ui->label->setVisible(true);
}

void MainWindow::on_northButton_clicked()
{
//goRoom("north");
ui->textBox->setText("You went north! You're now in room ");
}

void MainWindow::on_eastButton_clicked()
{
//goRoom("east");
    ui->textBox->setText("You went east! You're now in room ");
}

void MainWindow::on_southButton_clicked()
{
//goRoom("south");
    ui->textBox->setText("You went south! You're now in room ");
}

void MainWindow::on_westButton_clicked()
{
//goRoom("west");
    ui->textBox->setText("You went west! You're now in room ");

}

void MainWindow::on_attackButton_clicked()
{

}


void MainWindow::on_infoButton_clicked()
{

}




void MainWindow::on_startButton_clicked()
{
    ui->mapButton->setVisible(true);
    ui->northButton->setVisible(true);
    ui->southButton->setVisible(true);
    ui->eastButton->setVisible(true);
    ui->westButton->setVisible(true);
    ui->attackButton->setVisible(true);
    ui->infoButton->setVisible(true);
    ui->quitButton->setVisible(true);
    ui->textBox->setVisible(true);
    ui->startButton->setVisible(false);
    ui->textBox->setText("Welcome to Zork!"
" Your objective is to go through the rooms, kill the enemies and rescue the princess."
" You are currently in Room A");
}
