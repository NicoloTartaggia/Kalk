#include<helptab.h>

helptab::helptab(QWidget* qw)  : QWidget(qw){

    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->setAlignment(Qt::AlignTop);
    mainLayout->setSpacing(20);
    QLabel* l1 = new QLabel("Di seguito troverete le istruzioni, passo per passo, per la costruzione della vostra formazione "
                           "ideale.");
    mainLayout->addWidget(l1);

    QLabel* l2 = new QLabel("1.\tSeleziona un modulo tra quelli proposti. Questa azione comporta la creazione di "
                            "una formazione secondo il modulo desiderato. \n\n"
                            "2.\tUna volta selezionato il modulo, puoi procedere alla creazione dei giocatori "
                            "da aggiungere alla tua formazione. Alla tua sinstra, troverai una serie di informazioni da \n "
                            "\tassegnare al giocatore che stai creando, che possono rispecchiare un giocatore vero oppure "
                            "uno inventato da te. Una volta assegnate le varie informazioni (nome,\n\t cognome, ecc.) e "
                            "settate le varie statistiche, premi su Aggiungi Giocatore."
                            "\n \tATTENZIONE: l'aggiunta di un giocatore è eseguita dal basso verso l'alto; "
                            "ciò significa che il primo giocatore che creerai sarà il portiere, seguito dai vari difensori, \n\tpoi"
                            " dai centrocampisti e infine dagli attaccanti. Possono essere aggiunti al massimo  "
                            "11 giocatori. \n\tInoltre, se selezioni un nuovo modulo mentre stai creando la tua squadra, tutti "
                            "i giocatori fino a quel momento creati veranno eliminati dalla formazione.\n\n"
                            "3.\tA questo punto, attraverso il pulsante Calcola overall squadra potrai visualizzare "
                            "l'overall complessivo della tua squadra, in base alle statistiche assegnate ad ogni\n\tgiocatore "
                            "(stile FIFA).\n\n4.\tAttraverso i pulsanti Aggiungi nome squadra e Aggiungi allenatore potrai aggiungere "
                            "alla tua formazione, rispettivamente, un nome di squadra e un allenatore, \n\tentrambi a piacere. Le "
                            "informazioni appena aggiunte verranno mostrate sulla parte inferiore della finestra. \n\n5.\t"
                            "Una volta ultimata la tua formazione, potrai visualizzare le informazioni relative a tutti i giocatori "
                            "tramite il pulsante Visualizza Squadra. Anche in questo caso,\n\t le informazioni sono visualizzate dall'alto "
                            "verso il basso. \n\n6.\tAttraverso il pulsante Elimina Squadra "
                            "in alto a destra,"
                            " "
                            "potrai eliminare tutte le informazioni e tutti i giocatori dalla tua formazione per crearne una di nuova.");

    mainLayout->addWidget(l2);

    QHBoxLayout* qhb = new QHBoxLayout;
    QPixmap pic;
    pic.load(":/images/rsz_palla.jpg");
    QLabel* l3 = new QLabel;
    l3->setFixedSize(250,250);
    l3->setPixmap(pic);

    qhb->addWidget(l3);
    qhb->setAlignment(l3,Qt::AlignCenter);

    mainLayout->addLayout(qhb);
    setLayout(mainLayout);
}
