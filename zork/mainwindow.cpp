#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Room.h"
#include "ZorkUL.h"
#include "Command.h"
#include "CommandWords.h"
#include "Parser.h"
#include <QDebug>
#include "Character.h"
#include "enemy.h"

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

    ui->infoButton->setVisible(false);
    ui->itemMenuButton->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->pushButton_2->setVisible(false);

    ui->room1->setVisible(false);
    ui->roomb->setVisible(false);
    ui->roomc->setVisible(false);
    ui->roomd->setVisible(false);
    ui->roome->setVisible(false);
    ui->roomf->setVisible(false);
    ui->roomg->setVisible(false);
    ui->roomh->setVisible(false);
    ui->roomi->setVisible(false);
    ui->label_6->setVisible(false);
    ui->roomk->setVisible(false);
    ui->rooml->setVisible(false);
    ui->label_7->setVisible(false);
    ui->label_8->setVisible(false);


}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_mapButton_clicked()
{
ui->label->setVisible(true);
ui->pushButton->setVisible(true);
ui->label_7->setVisible(true);

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

    ui->pushButton->setVisible(false);
    ui->pushButton_2->setVisible(false);

    ui->label_8->setVisible(false);
    ui->label_7->setVisible(false);

}
    ;

 if(room=="B") {
     ui->roomb->setVisible(true);
     ui->roomb->raise();
 }
 else if(room=="C") {
     ui->roomc->setVisible(true);
     ui->roomc->raise();
 }
 else if(room=="D") {
     ui->roomd->setVisible(true);
     ui->roomd->raise();
 }
 else if(room=="E") {
     ui->roome->setVisible(true);
     ui->roome->raise();
 }
 else if(room=="F") {
     ui->roomf->setVisible(true);
     ui->roomf->raise();
 }
 else if(room=="G") {
     ui->roomg->setVisible(true);
     ui->roomg->raise();
 }
 else if(room=="H") {
     ui->roomh->setVisible(true);
     ui->roomh->raise();
}
 else if(room=="I") {
     ui->roomi->setVisible(true);
     ui->roomi->raise();
}
 else if(room=="J") {
     ui->label_6->setVisible(true);
     ui->label_6->raise();
}
 else if(room=="K") {
     ui->roomk->setVisible(true);
     ui->roomk->raise();
}
 else if(room=="L") {
     ui->rooml->setVisible(true);
     ui->rooml->raise();
}

}

void MainWindow::on_eastButton_clicked()
{
zorkul.go("east");
string room;
 room = zorkul.currentRoom->shortDescription();
 QString qstr = QString::fromStdString(room);
    ui->textBox->setText("You went east! You are now in room " + qstr);

    if(room=="B") {
        ui->roomb->setVisible(true);
        ui->roomb->raise();
    }
    else if(room=="C") {
        ui->roomc->setVisible(true);
        ui->roomc->raise();
    }
    else if(room=="D") {
        ui->roomd->setVisible(true);
        ui->roomd->raise();
    }
    else if(room=="E") {
        ui->roome->setVisible(true);
        ui->roome->raise();
    }
    else if(room=="F") {
        ui->roomf->setVisible(true);
        ui->roomf->raise();
    }
    else if(room=="G") {
        ui->roomg->setVisible(true);
        ui->roomg->raise();
    }
    else if(room=="H") {
        ui->roomh->setVisible(true);
        ui->roomh->raise();
   }
    else if(room=="I") {
        ui->roomi->setVisible(true);
        ui->roomi->raise();
   }
    else if(room=="J") {
        ui->label_6->setVisible(true);
        ui->label_6->raise();
   }
    else if(room=="K") {
        ui->roomk->setVisible(true);
        ui->roomk->raise();
   }
    else if(room=="L") {
        ui->rooml->setVisible(true);
        ui->rooml->raise();
   }

}

void MainWindow::on_southButton_clicked()
{
zorkul.go("south");
string room;
 room = zorkul.currentRoom->shortDescription();
 QString qstr = QString::fromStdString(room);
    ui->textBox->setText("You went south! You are now in room " + qstr);

    if(room=="B") {
        ui->roomb->setVisible(true);
        ui->roomb->raise();
    }
    else if(room=="C") {
        ui->roomc->setVisible(true);
        ui->roomc->raise();
    }
    else if(room=="D") {
        ui->roomd->setVisible(true);
        ui->roomd->raise();
    }
    else if(room=="E") {
        ui->roome->setVisible(true);
        ui->roome->raise();
    }
    else if(room=="F") {
        ui->roomf->setVisible(true);
        ui->roomf->raise();
    }
    else if(room=="G") {
        ui->roomg->setVisible(true);
        ui->roomg->raise();
    }
    else if(room=="H") {
        ui->roomh->setVisible(true);
        ui->roomh->raise();
   }
    else if(room=="I") {
        ui->roomi->setVisible(true);
        ui->roomi->raise();
   }
    else if(room=="J") {
        ui->label_6->setVisible(true);
        ui->label_6->raise();
   }
    else if(room=="K") {
        ui->roomk->setVisible(true);
        ui->roomk->raise();
   }
    else if(room=="L") {
        ui->rooml->setVisible(true);
        ui->rooml->raise();
   }

}



void MainWindow::on_westButton_clicked()
{
zorkul.go("west");
string room;
 room = zorkul.currentRoom->shortDescription();
 QString qstr = QString::fromStdString(room);
    ui->textBox->setText("You went west! You are now in room " + qstr);

    if(room=="B") {
        ui->roomb->setVisible(true);
        ui->roomb->raise();
    }
    else if(room=="C") {
        ui->roomc->setVisible(true);
        ui->roomc->raise();
    }
    else if(room=="D") {
        ui->roomd->setVisible(true);
        ui->roomd->raise();
    }
    else if(room=="E") {
        ui->roome->setVisible(true);
        ui->roome->raise();
    }
    else if(room=="F") {
        ui->roomf->setVisible(true);
        ui->roomf->raise();
    }
    else if(room=="G") {
        ui->roomg->setVisible(true);
        ui->roomg->raise();
    }
    else if(room=="H") {
        ui->roomh->setVisible(true);
        ui->roomh->raise();
    }
    else if(room=="I") {
        ui->roomi->setVisible(true);
        ui->roomi->raise();
    }
    else if(room=="J") {
        ui->label_6->setVisible(true);
        ui->label_6->raise();
    }
    else if(room=="K") {
        ui->roomk->setVisible(true);
        ui->roomk->raise();
    }
    else if(room=="L") {
        ui->rooml->setVisible(true);
        ui->rooml->raise();
    }


}

void MainWindow::on_attackButton_clicked()
{
    string enemy;
    enemy = zorkul.currentRoom->displayEnemy();
    QString qstr = QString::fromStdString(enemy);
if((zorkul.currentRoom->numberOfEnemies()) == 0){
    ui->textBox->setText("Why are you attacking? There are no enemies here...");
} else{
     ui->textBox->setText("You have killed " + qstr);
     zorkul.currentRoom->removeEnemy();
}
}

void MainWindow::on_infoButton_clicked()
{
    if((currentRoom->numberOfItems())==0) {
        ui->textBox->setText("There are no items in this room");
    }
    else {
        int items;
        string itemsam;
        items = zorkul.currentRoom->numberOfItems();
        itemsam = to_string(items);

        QString itemsq = QString::fromStdString(itemsam);
        if(items == 0 ) {
            ui->textBox->setText("There are no items in this room.");
        }
        else if(items == 1) {
            ui->textBox->setText("There is 1 item in this room.");

        }
        else {
            ui->textBox->setText("There are " + itemsq + " items in the room");
        }
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
    ui->room1->setVisible(true);
    ui->label_8->setVisible(true);
    ui->textBox->setText("Welcome to Zork!"
" Your objective is to go through the rooms, kill the enemies and rescue the princess."
" You are currently in Room A");


}


void MainWindow::on_itemMenuButton_clicked()
{
    ui->infoButton->setVisible(true);

    ui->pickUpButton->setVisible(true);
    ui->itemMenuButton->setVisible(false);
    ui->pushButton_2->setVisible(true);



}

void MainWindow::on_pickUpButton_clicked()
{

    string item;
    item = zorkul.currentRoom->displayItem();
    QString qstr = QString::fromStdString(item);

        ui ->textBox->setText("You have picked up a " + qstr);
    zorkul.currentRoom->removeItem();
   // if(zorkul.currentRoom->numberOfItems()==0) {
     //   ui->textBox->setText("There are no items in this room");
   // }

}
void MainWindow::on_pushButton_clicked()
{
    ui->label->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->label_7->setVisible(false);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->itemMenuButton->setVisible(true);
    ui->infoButton->setVisible(false);

    ui->pickUpButton->setVisible(false);
    ui->pushButton_2->setVisible(false);

}


