#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "ZorkUL.h"
#include "Character.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private:
    void go(string direction);

private slots:
    void on_quitButton_clicked() {
        close();

    };

    void on_mapButton_clicked();

    void on_northButton_clicked();

    void on_eastButton_clicked();

    void on_southButton_clicked();

    void on_westButton_clicked();

    void on_attackButton_clicked();

    void on_infoButton_clicked();

    void on_startButton_clicked();

    void on_itemMenuButton_clicked();

    void on_pickUpButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    ZorkUL zorkul;
    Room *currentRoom;
};
#endif // MAINWINDOW_H
