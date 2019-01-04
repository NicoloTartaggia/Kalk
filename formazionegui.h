#ifndef FORMAZIONEGUI_H
#define FORMAZIONEGUI_H

#include<QInputDialog>
#include<QPushButton>
#include<QWidget>
#include<QSpinBox>
#include<QGridLayout>
#include<QLineEdit>
#include<QLabel>
#include"eccezione.h"
#include"campo.h"
#include"info.h"
#include"formazionebase.h"

class QLayoutItem;

class FormazioneGUI: public QWidget{

    Q_OBJECT

public:
    FormazioneGUI();
    FormazioneGUI(QWidget*);
    ~FormazioneGUI();
    QVBoxLayout* getVBoxLayout() const;
    QHBoxLayout* getHBoxLayout() const;
    QHBoxLayout* getLast() const;
    FormazioneBase* getFormazioneBase() const;
    Campo* getCampo() const;
    Info* getInfo() const;
    QPushButton* createButton(const QString&, QWidget*, const char*);

    QLineEdit* getNome() const;
    QLineEdit* getCognome() const;
    QSpinBox* getEta() const;
    QLineEdit* getNazione() const;
    QLineEdit* getClub() const;
    QLineEdit* getCampionato() const;

    QSpinBox* getVelocita() const;
    QSpinBox* getPassaggio() const;
    QSpinBox* getTiro() const;
    QSpinBox* getDribbling() const;
    QSpinBox* getDifesa() const;
    QSpinBox* getFisico() const;
private:
    QHBoxLayout* qhb, *last;
    QVBoxLayout* qvb;
    FormazioneBase* fb;
    Campo* form;
    Info* i;

    QLineEdit* nome, *cognome, *nazione, *campionato, *club;
    QSpinBox* velocita, *passaggio, *tiro, *dribbling, *difesa, *fisico, *eta;
    QGridLayout * qglinfo;
};
#endif
