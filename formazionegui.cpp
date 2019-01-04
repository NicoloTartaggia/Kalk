#include<formazionegui.h>

FormazioneGUI::FormazioneGUI(){}

FormazioneGUI::~FormazioneGUI(){}

FormazioneGUI::FormazioneGUI(QWidget * qw) : QWidget(qw){
    QWidget* mw=static_cast<QWidget*>(qw->parent());
    fb = new FormazioneBase();
    qvb = new QVBoxLayout;

    QPushButton* addName = createButton(tr("Aggiungi nome squadra"),mw,SLOT(aggiungiNome()));
    addName->setStyleSheet("background-color: silver");
    QPushButton* removeTeam = createButton(tr("Elimina squadra"),mw,SLOT(eliminaTeam()));
    removeTeam->setStyleSheet("background-color: orange");
    QPushButton* calcolaOverallTeam = createButton(tr("Calcola overall squadra"),mw,SLOT(overallTeam()));
    calcolaOverallTeam->setStyleSheet("background-color: silver");
    QPushButton* addCoach = createButton(tr("Aggiungi allenatore"),mw,SLOT(aggiungiAll()));
    addCoach->setStyleSheet("background-color: silver");
    QPushButton* confirm = createButton(tr("Aggiungi Giocatore"),mw,SLOT(aggiungiG()));
    confirm->setStyleSheet("background-color: tan");
    QPushButton* show = createButton(tr("Visualizza squadra"),mw,SLOT(showInfo()));
    show->setStyleSheet("background-color: silver");


    QHBoxLayout* qhbb = new QHBoxLayout;

    form = new Campo();
    QGroupBox* mod = new QGroupBox("Moduli");
    mod->setMaximumWidth(200);


    QGridLayout* qgl = new QGridLayout;
    qgl->setSizeConstraint(QLayout::SetFixedSize);
    qgl->setHorizontalSpacing(30);
    qgl->addWidget(addName,0,0);
    qgl->addWidget(addCoach,0,1);
    qgl->addWidget(removeTeam,0,5);
    qgl->addWidget(calcolaOverallTeam,0,3);
    qgl->addWidget(show,0,4);
    qhbb->addLayout(qgl);
    qvb->addLayout(qhbb);

    QLabel* n = new QLabel("Nome",this);
    n->setAlignment(Qt::AlignHCenter);
    n->setFixedSize(100,20);
    n->setFrameStyle(QFrame::Panel | QFrame::Shadow_Mask);
    nome = new QLineEdit(this);
    nome->setFixedSize(150,25);
    nome->setAlignment(Qt::AlignCenter);

    QLabel* c = new QLabel("Cognome",this);
    c->setAlignment(Qt::AlignHCenter);
    c->setFixedSize(100,20);
    c->setFrameStyle(QFrame::Panel | QFrame::Shadow_Mask);
    cognome = new QLineEdit(this);
    cognome->setFixedSize(150,25);
    cognome->setAlignment(Qt::AlignCenter);

    QLabel* e = new QLabel("Età",this);
    e->setAlignment(Qt::AlignHCenter);
    e->setFixedSize(100,20);
    e->setFrameStyle(QFrame::Panel | QFrame::Shadow_Mask);
    eta = new QSpinBox(this);
    eta->setRange(16,99);
    eta->setFixedSize(150,25);
    eta->setAlignment(Qt::AlignCenter);

    QLabel* naz = new QLabel("Nazione",this);
    naz->setAlignment(Qt::AlignHCenter);
    naz->setFixedSize(100,20);
    naz->setFrameStyle(QFrame::Panel | QFrame::Shadow_Mask);
    nazione = new QLineEdit(this);
    nazione->setFixedSize(150,25);
    nazione->setAlignment(Qt::AlignCenter);

    QLabel* cam = new QLabel("Campionato",this);
    cam->setAlignment(Qt::AlignHCenter);
    cam->setFixedSize(100,20);
    cam->setFrameStyle(QFrame::Panel | QFrame::Shadow_Mask);
    campionato = new QLineEdit(this);
    campionato->setFixedSize(150,25);
    campionato->setAlignment(Qt::AlignCenter);

    QLabel* cl = new QLabel("Club",this);
    cl->setAlignment(Qt::AlignHCenter);
    cl->setFixedSize(100,20);
    cl->setFrameStyle(QFrame::Panel | QFrame::Shadow_Mask);
    club = new QLineEdit(this);
    club->setFixedSize(150,25);
    club->setAlignment(Qt::AlignCenter);

    QLabel* info = new QLabel("• INFORMAZIONI GENERALI",this);
    QLabel* stat = new QLabel("• STATISTICHE",this);

    QLabel* v = new QLabel("Velocità (Tuffo)",this);
    v->setAlignment(Qt::AlignHCenter);
    v->setFixedSize(170,20);
    v->setFrameStyle(QFrame::Panel | QFrame::Shadow_Mask);
    velocita = new QSpinBox(this);
    velocita->setAlignment(Qt::AlignHCenter);
    velocita->setFixedSize(150,25);
    velocita->setRange(0,99);

    QLabel* p = new QLabel("Passaggio (Presa)",this);
    p->setAlignment(Qt::AlignHCenter);
    p->setFixedSize(170,20);
    p->setFrameStyle(QFrame::Panel | QFrame::Shadow_Mask);
    passaggio = new QSpinBox(this);
    passaggio->setAlignment(Qt::AlignHCenter);
    passaggio->setFixedSize(150,25);
    passaggio->setRange(0,99);

    QLabel* t = new QLabel("Tiro (Rinvio)",this);
    t->setAlignment(Qt::AlignHCenter);
    t->setFixedSize(170,20);
    t->setFrameStyle(QFrame::Panel | QFrame::Shadow_Mask);
    tiro = new QSpinBox(this);
    tiro->setAlignment(Qt::AlignHCenter);
    tiro->setFixedSize(150,25);
    tiro->setRange(0,99);

    QLabel* dr = new QLabel("Dribbling (Riflessi)",this);
    dr->setAlignment(Qt::AlignHCenter);
    dr->setFixedSize(170,20);
    dr->setFrameStyle(QFrame::Panel | QFrame::Shadow_Mask);
    dribbling = new QSpinBox(this);
    dribbling->setAlignment(Qt::AlignHCenter);
    dribbling->setFixedSize(150,25);
    dribbling->setRange(0,99);

    QLabel* dif = new QLabel("Difesa (Agilità)",this);
    dif->setAlignment(Qt::AlignHCenter);
    dif->setFixedSize(170,20);
    dif->setFrameStyle(QFrame::Panel | QFrame::Shadow_Mask);
    difesa = new QSpinBox(this);
    difesa->setAlignment(Qt::AlignHCenter);
    difesa->setFixedSize(150,25);
    difesa->setRange(0,99);

    QLabel* fis = new QLabel("Fisico (Piazzamento)",this);
    fis->setAlignment(Qt::AlignHCenter);
    fis->setFixedSize(170,20);
    fis->setFrameStyle(QFrame::Panel | QFrame::Shadow_Mask);
    fisico = new QSpinBox(this);
    fisico->setAlignment(Qt::AlignHCenter);
    fisico->setFixedSize(150,25);
    fisico->setRange(0,99);

    qglinfo = new QGridLayout;
    qglinfo->setSizeConstraint(QLayout::SetFixedSize);
    qglinfo->addWidget(info,0,0);
    qglinfo->setRowMinimumHeight(0,50);
    qglinfo->addWidget(n,1,0);
    qglinfo->addWidget(nome,1,1);
    qglinfo->addWidget(cognome,2,1);
    qglinfo->addWidget(c,2,0);
    qglinfo->addWidget(e,3,0);
    qglinfo->addWidget(eta,3,1);
    qglinfo->addWidget(naz,4,0);
    qglinfo->addWidget(nazione,4,1);
    qglinfo->addWidget(cam,5,0);
    qglinfo->addWidget(campionato,5,1);
    qglinfo->addWidget(cl,6,0);
    qglinfo->addWidget(club,6,1);
    qglinfo->addWidget(stat,7,0);
    qglinfo->setRowMinimumHeight(7,50);
    qglinfo->addWidget(v,8,0);
    qglinfo->addWidget(velocita,8,1);
    qglinfo->addWidget(p,9,0);
    qglinfo->addWidget(passaggio,9,1);
    qglinfo->addWidget(t,10,0);
    qglinfo->addWidget(tiro,10,1);
    qglinfo->addWidget(dr,11,0);
    qglinfo->addWidget(dribbling,11,1);
    qglinfo->addWidget(dif,12,0);
    qglinfo->addWidget(difesa,12,1);
    qglinfo->addWidget(fis,13,0);
    qglinfo->addWidget(fisico,13,1);
    qglinfo->addWidget(confirm,14,0);
    qglinfo->setRowMinimumHeight(14,40);
    QGroupBox* groupinfo = new QGroupBox;
    groupinfo->setTitle("Aggiungi giocatore");
    groupinfo->setLayout(qglinfo);
    qhb = new QHBoxLayout;
    qhb->addWidget(groupinfo);

    qhb->addWidget(mod);
    form->setLayout(qhb);
    setLayout(qvb);

    QVBoxLayout* qvb2 = new QVBoxLayout;

    QPushButton* cb1 = createButton(tr("4-4-2"),mw,SLOT(creaMod442()));
    QPushButton* cb2 = createButton(tr("4-3-3"),mw,SLOT(creaMod433()));
    QPushButton* cb3 = createButton(tr("3-5-2"),mw,SLOT(creaMod352()));
    QPushButton* cb4 = createButton(tr("5-3-2"),mw,SLOT(creaMod532()));
    QPushButton* cb5 = createButton(tr("4-5-1"),mw,SLOT(creaMod451()));
    QPushButton* cb6 = createButton(tr("4-3-1-2"),mw,SLOT(creaMod4312()));
    QPushButton* cb7 = createButton(tr("4-3-2-1"),mw,SLOT(creaMod4321()));
    QPushButton* cb8 = createButton(tr("4-2-3-1"),mw,SLOT(creaMod4231()));
    QPushButton* cb9 = createButton(tr("4-4-1-1"),mw,SLOT(creaMod4411()));
    QPushButton* cb10 = createButton(tr("4-1-4-1"),mw,SLOT(creaMod4141()));
    QPushButton* cb11 = createButton(tr("4-1-2-1-2"),mw,SLOT(creaMod41212()));
    cb1->setStyleSheet("background-color: tan");
    cb2->setStyleSheet("background-color: tan");
    cb3->setStyleSheet("background-color: tan");
    cb4->setStyleSheet("background-color: tan");
    cb5->setStyleSheet("background-color: tan");
    cb6->setStyleSheet("background-color: tan");
    cb7->setStyleSheet("background-color: tan");
    cb8->setStyleSheet("background-color: tan");
    cb9->setStyleSheet("background-color: tan");
    cb10->setStyleSheet("background-color: tan");
    cb11->setStyleSheet("background-color: tan");
    qvb2->addWidget(cb1);
    qvb2->addWidget(cb2);
    qvb2->addWidget(cb3);
    qvb2->addWidget(cb4);
    qvb2->addWidget(cb5);
    qvb2->addWidget(cb6);
    qvb2->addWidget(cb7);
    qvb2->addWidget(cb8);
    qvb2->addWidget(cb9);
    qvb2->addWidget(cb10);
    qvb2->addWidget(cb11);
    mod->setLayout(qvb2);


    qvb->addLayout(qhb);

    i = new Info();
    last = new QHBoxLayout;
    last->addWidget(i->getNomeTeam());
    last->addWidget(i->getNomeAll());
    qvb->addLayout(last);
}

QPushButton* FormazioneGUI:: createButton(const QString & nome, QWidget * parent, const char * signal){
    QPushButton *button = new QPushButton(parent);
    button->setText(nome);
    connect(button, SIGNAL(clicked()), parent, signal);
    return button;
}

QVBoxLayout* FormazioneGUI:: getVBoxLayout() const{ return qvb;}

QHBoxLayout* FormazioneGUI:: getHBoxLayout() const{ return qhb;}

QHBoxLayout* FormazioneGUI:: getLast() const{ return last;}

FormazioneBase* FormazioneGUI:: getFormazioneBase() const{return fb;}

Campo* FormazioneGUI::getCampo() const {return form;}

Info* FormazioneGUI::getInfo() const{return i;}

QLineEdit* FormazioneGUI:: getNome() const{return nome;}
QLineEdit* FormazioneGUI:: getCognome() const {return cognome;}
QSpinBox *FormazioneGUI::getEta() const{return eta;}
QLineEdit* FormazioneGUI:: getNazione() const {return nazione;}
QLineEdit* FormazioneGUI:: getClub() const {return club;}
QLineEdit* FormazioneGUI:: getCampionato() const {return campionato;}

QSpinBox* FormazioneGUI:: getVelocita() const {return velocita;}
QSpinBox* FormazioneGUI:: getPassaggio() const {return passaggio;}
QSpinBox* FormazioneGUI:: getTiro() const {return tiro;}
QSpinBox* FormazioneGUI:: getDribbling() const {return dribbling;}
QSpinBox* FormazioneGUI:: getDifesa() const {return difesa;}
QSpinBox* FormazioneGUI:: getFisico() const {return fisico;}
