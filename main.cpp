#include "mainwindow.h"
#include <QApplication>
/*#include<QLabel>
#include<iostream>
#include "portiere.h"
#include "difensore.h"
#include "centrocampista.h"
#include "attaccante.h"
#include "formazionebase.h"
*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow* w = new MainWindow();
    w->setStyleSheet("background: seashell");
    w->show();

    return a.exec();
}
