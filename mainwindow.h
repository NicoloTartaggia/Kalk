#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<helptab.h>
#include<string>
#include<formazionegui.h>
//#include"newwindow.h"
#include<QMessageBox>

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();
public slots:
    void aggiungiNome();
    void aggiungiG();
    void eliminaTeam();
    void overallTeam();
    void aggiungiAll();
    void creaMod442();
    void creaMod433();
    void creaMod352();
    void creaMod532();
    void creaMod451();
    void creaMod4312();
    void creaMod4321();
    void creaMod4231();
    void creaMod4411();
    void creaMod4141();
    void creaMod41212();
    void showInfo();
};

#endif // MAINWINDOW_H
