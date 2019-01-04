#include<info.h>

Info::Info(): QGroupBox() {
    nomeTeam = new QGroupBox;
    nomeTeam->setTitle("Nome Squadra");
    nomeTeam->setMaximumWidth(300);
    nomeAll = new QGroupBox;
    nomeAll->setTitle("Nome Allenatore");
    nomeAll->setMaximumWidth(300);
}

QGroupBox* Info:: getNomeTeam() const{
    return nomeTeam;
}

QGroupBox* Info:: getNomeAll() const{
    return nomeAll;
}

void Info::resetInfo(){
    delete nomeTeam;
    delete nomeAll;
    nomeTeam = new QGroupBox;
    nomeAll = new QGroupBox;
    nomeTeam->setTitle("Nome Squadra");
    nomeTeam->setMaximumWidth(300);
    nomeAll->setTitle("Nome Allenatore");
    nomeAll->setMaximumWidth(300);
}

void Info:: setNomeAll(QWidget* qw) {
    resetAll();
    QHBoxLayout* qhb = new QHBoxLayout;
    qhb->addWidget(qw);
    qhb->setAlignment(qw,Qt::AlignLeft);
    nomeAll->setLayout(qhb);
    nomeAll->setMaximumWidth(300);
}

void Info::setNomeTeam(QWidget* qw){
    resetTeam();
    QHBoxLayout* qhb = new QHBoxLayout;
    qhb->addWidget(qw);
    qhb->setAlignment(qw,Qt::AlignLeft);
    nomeTeam->setLayout(qhb);
    nomeTeam->setMaximumWidth(300);
}

void Info::resetTeam(){
    delete nomeTeam;
    nomeTeam = new QGroupBox;
    nomeTeam->setTitle("Nome Squadra");
}

void Info::resetAll(){
    delete nomeAll;
    nomeAll= new QGroupBox;
    nomeAll->setTitle("Nome Allenatore");
}
