#include<campo.h>

Campo::Campo(): QGroupBox() {
    qbg = new QGroupBox;
    qbg->setTitle("Formazione");
}

void Campo:: setLayout(QLayout* l) const {l->addWidget(qbg);}

QGroupBox* Campo::addToGB(QLayout * l){
    resetCampo();
    qbg->setLayout(l);
    return qbg;
}

void Campo::resetCampo(){
    delete qbg;
    qbg = new QGroupBox;
    qbg->setTitle("Formazione");
}

QGroupBox* Campo::getGB() const {return qbg;}
