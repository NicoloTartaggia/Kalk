#include "mainwindow.h"
#include<QLayout>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent){
    setWindowTitle("Formazione Kalk");
    QTabWidget* tabwidget = new QTabWidget(this);
    tabwidget->addTab(new FormazioneGUI(tabwidget),"Formazione");
    tabwidget->addTab(new helptab(tabwidget),"Help");

    setCentralWidget(tabwidget);
    setMinimumSize(1200,725);
    setMaximumSize(1200,725);
}


MainWindow::~MainWindow(){}

void MainWindow:: creaMod442(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent()->parent());

    FormazioneBase* fb = currW->getFormazioneBase();
    fb->eliminaSquadra();
    std::vector<int> v;
    v.push_back(4);
    v.push_back(4);
    v.push_back(2);
    fb->aggiungiModulo(v);
    QHBoxLayout* qhb = new QHBoxLayout;
    QPixmap pic(":/images/rsz_icona.png");
    QLabel* image = new QLabel(this);
    image->setFixedSize(50,50);
    image->setPixmap(pic);
    qhb->addWidget(image);
    QVBoxLayout* qvb = new QVBoxLayout;
    qvb->addLayout(qhb);

    Campo* c = currW->getCampo();

    QHBoxLayout* qhb2 = currW->getHBoxLayout();

    for(int i = 0; i < v.size(); i++){
        QHBoxLayout* qhb3 = new QHBoxLayout;
        for(int j = 0; j<v[i]; j++){
            QPixmap pic(":/images/rsz_icona.png");
            QLabel* image = new QLabel(this);
            image->setFixedSize(50,50);
            image->setPixmap(pic);
            qhb3->addWidget(image);
        }
        qvb->addLayout(qhb3);
    }
    qhb2->addWidget(c->addToGB(qvb));
}

void MainWindow::creaMod433(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent()->parent());

    FormazioneBase* fb = currW->getFormazioneBase();
    fb->eliminaSquadra();
    std::vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);
    fb->aggiungiModulo(v);
    QHBoxLayout* qhb = new QHBoxLayout;
    QPixmap pic(":/images/rsz_icona.png");
    QLabel* image = new QLabel(this);
    image->setFixedSize(50,50);
    image->setPixmap(pic);
    qhb->addWidget(image);
    QVBoxLayout* qvb = new QVBoxLayout;
    qvb->addLayout(qhb);

    Campo* c = currW->getCampo();

    QHBoxLayout* qhb2 = currW->getHBoxLayout();

    for(int i = 0; i < v.size(); i++){
        QHBoxLayout* qhb3 = new QHBoxLayout;
        for(int j = 0; j<v[i]; j++){
            QPixmap pic(":/images/rsz_icona.png");
            QLabel* image = new QLabel(this);
            image->setFixedSize(50,50);
            image->setPixmap(pic);
            qhb3->addWidget(image);
        }
        qvb->addLayout(qhb3);
    }
    qhb2->addWidget(c->addToGB(qvb));
}

void MainWindow::creaMod352(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent()->parent());

    FormazioneBase* fb = currW->getFormazioneBase();
    fb->eliminaSquadra();
    std::vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(2);
    fb->aggiungiModulo(v);
    QHBoxLayout* qhb = new QHBoxLayout;
    QPixmap pic(":/images/rsz_icona.png");
    QLabel* image = new QLabel(this);
    image->setFixedSize(50,50);
    image->setPixmap(pic);
    qhb->addWidget(image);
    QVBoxLayout* qvb = new QVBoxLayout;
    qvb->addLayout(qhb);

    Campo* c = currW->getCampo();

    QHBoxLayout* qhb2 = currW->getHBoxLayout();

    for(int i = 0; i < v.size(); i++){
        QHBoxLayout* qhb3 = new QHBoxLayout;
        for(int j = 0; j<v[i]; j++){
            QPixmap pic(":/images/rsz_icona.png");
            QLabel* image = new QLabel(this);
            image->setFixedSize(50,50);
            image->setPixmap(pic);
            qhb3->addWidget(image);
        }
        qvb->addLayout(qhb3);
    }
    qhb2->addWidget(c->addToGB(qvb));
}

void MainWindow::creaMod532(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent()->parent());

    FormazioneBase* fb = currW->getFormazioneBase();
    fb->eliminaSquadra();
    std::vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(2);
    fb->aggiungiModulo(v);
    QHBoxLayout* qhb = new QHBoxLayout;
    QPixmap pic(":/images/rsz_icona.png");
    QLabel* image = new QLabel(this);
    image->setFixedSize(50,50);
    image->setPixmap(pic);
    qhb->addWidget(image);
    QVBoxLayout* qvb = new QVBoxLayout;
    qvb->addLayout(qhb);

    Campo* c = currW->getCampo();

    QHBoxLayout* qhb2 = currW->getHBoxLayout();

    for(int i = 0; i < v.size(); i++){
        QHBoxLayout* qhb3 = new QHBoxLayout;
        for(int j = 0; j<v[i]; j++){
            QPixmap pic(":/images/rsz_icona.png");
            QLabel* image = new QLabel(this);
            image->setFixedSize(50,50);
            image->setPixmap(pic);
            qhb3->addWidget(image);
        }
        qvb->addLayout(qhb3);
    }
    qhb2->addWidget(c->addToGB(qvb));
}

void MainWindow::creaMod451(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent()->parent());

    FormazioneBase* fb = currW->getFormazioneBase();
    fb->eliminaSquadra();
    std::vector<int> v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    fb->aggiungiModulo(v);
    QHBoxLayout* qhb = new QHBoxLayout;
    QPixmap pic(":/images/rsz_icona.png");
    QLabel* image = new QLabel(this);
    image->setFixedSize(50,50);
    image->setPixmap(pic);
    qhb->addWidget(image);
    QVBoxLayout* qvb = new QVBoxLayout;
    qvb->addLayout(qhb);

    Campo* c = currW->getCampo();

    QHBoxLayout* qhb2 = currW->getHBoxLayout();

    for(int i = 0; i < v.size(); i++){
        QHBoxLayout* qhb3 = new QHBoxLayout;
        for(int j = 0; j<v[i]; j++){
            QPixmap pic(":/images/rsz_icona.png");
            QLabel* image = new QLabel(this);
            image->setFixedSize(50,50);
            image->setPixmap(pic);
            qhb3->addWidget(image);
        }
        qvb->addLayout(qhb3);
    }
    qhb2->addWidget(c->addToGB(qvb));
}

void MainWindow::creaMod4312(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent()->parent());

    FormazioneBase* fb = currW->getFormazioneBase();
    fb->eliminaSquadra();
    std::vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    fb->aggiungiModulo(v);
    QHBoxLayout* qhb = new QHBoxLayout;
    QPixmap pic(":/images/rsz_icona.png");
    QLabel* image = new QLabel(this);
    image->setFixedSize(50,50);
    image->setPixmap(pic);
    qhb->addWidget(image);
    QVBoxLayout* qvb = new QVBoxLayout;
    qvb->addLayout(qhb);

    Campo* c = currW->getCampo();

    QHBoxLayout* qhb2 = currW->getHBoxLayout();

    for(int i = 0; i < v.size(); i++){
        QHBoxLayout* qhb3 = new QHBoxLayout;
        for(int j = 0; j<v[i]; j++){
            QPixmap pic(":/images/rsz_icona.png");
            QLabel* image = new QLabel(this);
            image->setFixedSize(50,50);
            image->setPixmap(pic);
            qhb3->addWidget(image);
        }
        qvb->addLayout(qhb3);
    }
    qhb2->addWidget(c->addToGB(qvb));
}

void MainWindow::creaMod4321(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent()->parent());

    FormazioneBase* fb = currW->getFormazioneBase();
    fb->eliminaSquadra();
    std::vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    fb->aggiungiModulo(v);
    QHBoxLayout* qhb = new QHBoxLayout;
    QPixmap pic(":/images/rsz_icona.png");
    QLabel* image = new QLabel(this);
    image->setFixedSize(50,50);
    image->setPixmap(pic);
    qhb->addWidget(image);
    QVBoxLayout* qvb = new QVBoxLayout;
    qvb->addLayout(qhb);

    Campo* c = currW->getCampo();

    QHBoxLayout* qhb2 = currW->getHBoxLayout();

    for(int i = 0; i < v.size(); i++){
        QHBoxLayout* qhb3 = new QHBoxLayout;
        for(int j = 0; j<v[i]; j++){
            QPixmap pic(":/images/rsz_icona.png");
            QLabel* image = new QLabel(this);
            image->setFixedSize(50,50);
            image->setPixmap(pic);
            qhb3->addWidget(image);
        }
        qvb->addLayout(qhb3);
    }
    qhb2->addWidget(c->addToGB(qvb));
}

void MainWindow::creaMod4231(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent()->parent());

    FormazioneBase* fb = currW->getFormazioneBase();
    fb->eliminaSquadra();
    std::vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    fb->aggiungiModulo(v);
    QHBoxLayout* qhb = new QHBoxLayout;
    QPixmap pic(":/images/rsz_icona.png");
    QLabel* image = new QLabel(this);
    image->setFixedSize(50,50);
    image->setPixmap(pic);
    qhb->addWidget(image);
    QVBoxLayout* qvb = new QVBoxLayout;
    qvb->addLayout(qhb);

    Campo* c = currW->getCampo();

    QHBoxLayout* qhb2 = currW->getHBoxLayout();

    for(int i = 0; i < v.size(); i++){
        QHBoxLayout* qhb3 = new QHBoxLayout;
        for(int j = 0; j<v[i]; j++){
            QPixmap pic(":/images/rsz_icona.png");
            QLabel* image = new QLabel(this);
            image->setFixedSize(50,50);
            image->setPixmap(pic);
            qhb3->addWidget(image);
        }
        qvb->addLayout(qhb3);
    }
    qhb2->addWidget(c->addToGB(qvb));
}

void MainWindow::creaMod4411(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent()->parent());

    FormazioneBase* fb = currW->getFormazioneBase();
    fb->eliminaSquadra();
    std::vector<int> v;
    v.push_back(4);
    v.push_back(4);
    v.push_back(1);
    v.push_back(1);
    fb->aggiungiModulo(v);
    QHBoxLayout* qhb = new QHBoxLayout;
    QPixmap pic(":/images/rsz_icona.png");
    QLabel* image = new QLabel(this);
    image->setFixedSize(50,50);
    image->setPixmap(pic);
    qhb->addWidget(image);
    QVBoxLayout* qvb = new QVBoxLayout;
    qvb->addLayout(qhb);

    Campo* c = currW->getCampo();

    QHBoxLayout* qhb2 = currW->getHBoxLayout();

    for(int i = 0; i < v.size(); i++){
        QHBoxLayout* qhb3 = new QHBoxLayout;
        for(int j = 0; j<v[i]; j++){
            QPixmap pic(":/images/rsz_icona.png");
            QLabel* image = new QLabel(this);
            image->setFixedSize(50,50);
            image->setPixmap(pic);
            qhb3->addWidget(image);
        }
        qvb->addLayout(qhb3);
    }
    qhb2->addWidget(c->addToGB(qvb));
}

void MainWindow::creaMod4141(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent()->parent());

    FormazioneBase* fb = currW->getFormazioneBase();
    fb->eliminaSquadra();
    std::vector<int> v;
    v.push_back(4);
    v.push_back(1);
    v.push_back(4);
    v.push_back(1);
    fb->aggiungiModulo(v);
    QHBoxLayout* qhb = new QHBoxLayout;
    QPixmap pic(":/images/rsz_icona.png");
    QLabel* image = new QLabel(this);
    image->setFixedSize(50,50);
    image->setPixmap(pic);
    qhb->addWidget(image);
    QVBoxLayout* qvb = new QVBoxLayout;
    qvb->addLayout(qhb);

    Campo* c = currW->getCampo();

    QHBoxLayout* qhb2 = currW->getHBoxLayout();

    for(int i = 0; i < v.size(); i++){
        QHBoxLayout* qhb3 = new QHBoxLayout;
        for(int j = 0; j<v[i]; j++){
            QPixmap pic(":/images/rsz_icona.png");
            QLabel* image = new QLabel(this);
            image->setFixedSize(50,50);
            image->setPixmap(pic);
            qhb3->addWidget(image);
        }
        qvb->addLayout(qhb3);
    }
    qhb2->addWidget(c->addToGB(qvb));
}

void MainWindow::creaMod41212(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent()->parent());

    FormazioneBase* fb = currW->getFormazioneBase();
    fb->eliminaSquadra();
    std::vector<int> v;
    v.push_back(4);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    fb->aggiungiModulo(v);
    QHBoxLayout* qhb = new QHBoxLayout;
    QPixmap pic(":/images/rsz_icona.png");
    QLabel* image = new QLabel(this);
    image->setFixedSize(50,50);
    image->setPixmap(pic);
    qhb->addWidget(image);
    QVBoxLayout* qvb = new QVBoxLayout;
    qvb->addLayout(qhb);

    Campo* c = currW->getCampo();

    QHBoxLayout* qhb2 = currW->getHBoxLayout();

    for(int i = 0; i < v.size(); i++){
        QHBoxLayout* qhb3 = new QHBoxLayout;
        for(int j = 0; j<v[i]; j++){
            QPixmap pic(":/images/rsz_icona.png");
            QLabel* image = new QLabel(this);
            image->setFixedSize(50,50);
            image->setPixmap(pic);
            qhb3->addWidget(image);
        }
        qvb->addLayout(qhb3);
    }
    qhb2->addWidget(c->addToGB(qvb));
}

void MainWindow::aggiungiG(){
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent()->parent());
    FormazioneBase* fb = currW->getFormazioneBase();

    QString n = currW->getNome()->text();
    std::string sn = n.toLocal8Bit().constData();
    QString c = currW->getCognome()->text();
    std::string sc = c.toLocal8Bit().constData();
    int e = currW->getEta()->value();
    QString naz = currW->getNazione()->text();
    std::string snaz = naz.toLocal8Bit().constData();
    QString cam = currW->getCampionato()->text();
    std::string scam = cam.toLocal8Bit().constData();
    QString cl = currW->getClub()->text();
    std::string scl = cl.toLocal8Bit().constData();

    int vel = currW->getVelocita()->value();
    int tir = currW->getTiro()->value();
    int pass = currW->getPassaggio()->value();
    int drib = currW->getDribbling()->value();
    int dif = currW->getDifesa()->value();
    int fis = currW->getFisico()->value();

    try{
        if(fb->SquadraCompleta()){ throw Eccezione("Squadra al completo.");}
        Giocatore* g;
        if(fb->getModulo().size()){
            if(fb->checkPortiere()){
                g = new Portiere(sn,sc,e,scam,scl,snaz);
                g->SetStats(vel,tir,pass,drib,dif,fis);
                fb->aggiungiTitolare(g);
            } else if(fb->checkDifesa()){
                g = new Difensore(sn,sc,e,scam,scl,snaz);
                g->SetStats(vel,tir,pass,drib,dif,fis);
                fb->aggiungiTitolare(g);
            } else if (fb->checkCentrocampo()){
                g = new Centrocampista(sn,sc,e,scam,scl,snaz);
                g->SetStats(vel,tir,pass,drib,dif,fis);
                fb->aggiungiTitolare(g);
            } else if (fb->checkAttacco()){
                g = new Attaccante(sn,sc,e,scam,scl,snaz);
                g->SetStats(vel,tir,pass,drib,dif,fis);
                fb->aggiungiTitolare(g);
            }

            QMessageBox::information(this,QString(""),QString("Giocatore aggiunto alla formazione"), QMessageBox::Ok);
        } else{
            throw Eccezione("Selezionare prima un modulo tra quelli proposti.");
        }
    }
    catch(Eccezione e){
        QMessageBox::information(this, QString("Errore"), QString::fromStdString(e.getError()), QMessageBox::Ok);
    }
}

void MainWindow::aggiungiNome(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent());

    Info* x = currW->getInfo();
    QInputDialog* id = new QInputDialog(clickedButton);
    QString text = id->getText(this, tr(""),tr("Aggiungi nome squadra"));
    std::string stext = text.toLocal8Bit().constData();    //converte qstring to string
    FormazioneBase* fb = currW->getFormazioneBase();
    fb->aggiungiAllenatore(stext);
    if(text.size() != 0 && text.size()<33){
        QLabel* l = new QLabel(text);
        QFont f("Maiandra",17,QFont::Courier);
        l->setFont(f);
        x->setNomeTeam(l);
        QHBoxLayout* qhb = currW->getLast();
        qhb->addWidget(x->getNomeTeam());
        qhb->addWidget(x->getNomeAll());
    }
}

void MainWindow::eliminaTeam(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent());

    //elimino la formazione
    Campo* c = currW->getCampo();
    c->resetCampo();
    QGroupBox* x = c->getGB();
    x->setTitle("Formazione");

    QHBoxLayout* qhb = currW->getHBoxLayout();
    qhb->addWidget(x);

    //elimino nome squadra e nome allenatore
    Info* i = currW->getInfo();
    QHBoxLayout* qhb2 = currW->getLast();
    i->resetInfo();
    QGroupBox* team = i->getNomeTeam();
    QGroupBox* all = i->getNomeAll();
    qhb2->addWidget(team);
    qhb2->addWidget(all);

    //elimino la squadra e il modulo
    FormazioneBase* fb = currW->getFormazioneBase();
    fb->eliminaSquadra();
    fb->eliminaModulo();
}

void MainWindow::overallTeam(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent());

    FormazioneBase* fb = currW->getFormazioneBase();

    int ov = fb->calcolaOverallTitolari();
    QString add = "Overall calcolato su un totale di: ";
    add.append(QString::number(fb->getTitolari().size()));
    add.append(" titolari.\nOverall: ");
    add.append(QString::number(ov));
    QMessageBox::about(this,"Overall",add);
}

void MainWindow::aggiungiAll(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent());

    Info* x = currW->getInfo();
    QInputDialog* id = new QInputDialog(clickedButton);
    QString text = id->getText(this, tr(""),tr("Aggiungi nome allenatore"));
    std::string stext = text.toLocal8Bit().constData();    //converte qstring to string
    FormazioneBase* fb = currW->getFormazioneBase();
    fb->aggiungiAllenatore(stext);
    if(text.size() != 0 && text.size()<33){
        QLabel* l = new QLabel(text);
        QFont f("Maiandra",17,QFont::Courier);
        l->setFont(f);
        x->setNomeAll(l);
        QHBoxLayout* qhb = currW->getLast();
        qhb->addWidget(x->getNomeTeam());
        qhb->addWidget(x->getNomeAll());
    }
}

void MainWindow::showInfo(){
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    FormazioneGUI* currW=static_cast<FormazioneGUI*>(clickedButton->parent());
    FormazioneBase* fb = currW->getFormazioneBase();
    QString s;
    std::vector<Giocatore*> v  = fb->getTitolari();
    for(std::vector<Giocatore*>::const_iterator i = v.begin(); i!=v.end(); i++){
        s.append(QString::fromStdString((*i)->getAllInfo()));
    }

    QMessageBox* msg = new QMessageBox(this);
    msg->about(this,"Info",s);
}
