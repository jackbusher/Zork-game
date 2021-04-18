#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Room.h"
#include "ZorkUL.h"
#include "Command.h"
#include "CommandWords.h"
#include "Parser.h"
#include "enemy.h"
#include "Character.h"
#include <QDebug>

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
    ui->pickUpButton->setVisible(false);
    ui->dropItemButton->setVisible(false);
    ui->infoButton->setVisible(false);
    ui->itemMenuButton->setVisible(false);
    ui->pushButton->setVisible(false);
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_mapButton_clicked()
{
ui->label->setVisible(true);
ui->pushButton->setVisible(true);

}



void MainWindow::on_northButton_clicked()
{
zorkul.go("north");
string room;
 room = zorkul.currentRoom->shortDescription();
 QString qstr = QString::fromStdString(room);
ui->textBox->setText("You went north! You are now in room " + qstr);
QString finalroom = "L";


if(qstr == finalroom) {
    ui->textBox->setText(("You completed the game! You saved the princess and defeated the enemies! Well done!"));
    ui->label->setVisible(false);
    ui->mapButton->setVisible(false);
    ui->northButton->setVisible(false);
    ui->southButton->setVisible(false);
    ui->eastButton->setVisible(false);
    ui->westButton->setVisible(false);
    ui->attackButton->setVisible(false);
    ui->infoButton->setVisible(false);
    ui->itemMenuButton->setVisible(false);
    ui->pickUpButton->setVisible(false);
    ui->dropItemButton->setVisible(false);
    ui->pushButton->setVisible(false);
}
    ;

}

void MainWindow::on_eastButton_clicked()
{
zorkul.go("east");
string room;
 room = zorkul.currentRoom->shortDescription();
 QString qstr = QString::fromStdString(room);
    ui->textBox->setText("You went east! You are now in room " + qstr);
}

void MainWindow::on_southButton_clicked()
{
zorkul.go("south");
string room;
 room = zorkul.currentRoom->shortDescription();
 QString qstr = QString::fromStdString(room);
    ui->textBox->setText("You went south! You are now in room " + qstr);
}



void MainWindow::on_westButton_clicked()
{
zorkul.go("west");
string room;
 room = zorkul.currentRoom->shortDescription();
 QString qstr = QString::fromStdString(room);
    ui->textBox->setText("You went west! You are now in room " + qstr);

}

void MainWindow::on_attackButton_clicked()
{
    string enemy;
    enemy = zorkul.currentRoom->displayEnemy();
    QString qstr = QString::fromStdString(enemy);
if((currentRoom->numberOfEnemies()) == 0){
    ui->textBox->setText("Why are you attacking? There are no enemies here...");
} else{
     ui->textBox->setText("You have killed " + qstr);
     setnumberOfEnemies(empty);
}
}




void MainWindow::on_infoButton_clicked()
{
    if((currentRoom->numberOfItems())==0) {
        ui->textBox->setText("There are no items in this room");
    }
    else {
        string items;
        items = zorkul.currentRoom->numberOfItems();
        QString itemsq = QString::fromStdString(items);

        ui->textBox->setText("There is at least one item in the room");
    }
}



void MainWindow::go(string direction) {
    Room* nextRoom = currentRoom->nextRoom(direction);
    if (nextRoom == NULL){
        currentRoom = currentRoom;
      //  currentRoom;
  }  else
    {
        currentRoom = nextRoom;

    }

}


void MainWindow::on_startButton_clicked()
{
    ui->mapButton->setVisible(true);
    ui->northButton->setVisible(true);
    ui->southButton->setVisible(true);
    ui->eastButton->setVisible(true);
    ui->westButton->setVisible(true);
    ui->attackButton->setVisible(true);
    ui->quitButton->setVisible(true);
    ui->textBox->setVisible(true);
    ui->startButton->setVisible(false);
    ui->itemMenuButton->setVisible(true);
    ui->textBox->setText("Welcome to Zork!"
" Your objective is to go through the rooms, kill the enemies and rescue the princess."
" You are currently in Room A");
}

void MainWindow::on_itemMenuButton_clicked()
{
    ui->infoButton->setVisible(true);
    ui->dropItemButton->setVisible(true);
    ui->pickUpButton->setVisible(true);

}

void MainWindow::on_pickUpButton_clicked()
{
    string item;
    item = zorkul.currentRoom->displayItem();
    QString qstr = QString::fromStdString(item);
ui ->textBox->setText("You have picked up a " + qstr);
}
bool MainWindow::on_dropItemButton_clicked()
{
   if(on_dropItemButton_clicked()){
     //  dropItem(item);
   }
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setVisible(false);
    ui->pushButton->setVisible(false);
}
