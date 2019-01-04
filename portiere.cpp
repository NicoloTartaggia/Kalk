#include<portiere.h>
#include<string>
#include<math.h>
#include<eccezione.h>


Portiere::Portiere() : tuffo(50), presa(50), rinvio(50), riflessi(50), agilita(50), piazzamento(50) {}
Portiere::Portiere(std::string n, std::string cgn, int e, std::string cam, std::string cl, std::string naz) :
    tuffo(50), presa(50), rinvio(50), riflessi(50), agilita(50), piazzamento(50), Giocatore(n,cgn,e,cam,cl,naz) {}

Portiere::~Portiere() {}

double Portiere::calcolaOverallGiocatore() const{
    return ceil((tuffo*0.20) + (presa*0.30) + (rinvio*0.05) + (riflessi*0.30) + (agilita*0.05) + (piazzamento*0.10));
}

void Portiere::SetStats(int tuf, int pr, int rin, int rif, int agi, int piaz){
    tuffo=tuf;
    presa=pr;
    rinvio=rin;
    riflessi=rif;
    agilita=agi;
    piazzamento=piaz;
    setOverall(calcolaOverallGiocatore());
}

std::string Portiere::getAllInfo() const{
    std::string s;
    s.append("-Nome: "); s.append(getNome());
    s.append(" Cognome: "); s.append(getCognome());
    s.append(" Età: "); s.append(std::to_string(getEta()));
    s.append(" Campionato: "); s.append(getCampionato());
    s.append(" Club: "); s.append(getClub());
    s.append(" Nazione: "); s.append(getNazione());
    s.append("\n");
    s.append("Tuffo: "); s.append(std::to_string(tuffo));
    s.append(" Presa: "); s.append(std::to_string(presa));
    s.append(" Rinvio: "); s.append(std::to_string(rinvio));
    s.append(" Riflessi: "); s.append(std::to_string(riflessi));
    s.append(" Agilità: "); s.append(std::to_string(agilita));
    s.append(" Piazzamento: "); s.append(std::to_string(piazzamento));
    s.append("\n");
    s.append("Overall: "); s.append(std::to_string(getOverall()));
    s.append("\n");
    return s;
}
