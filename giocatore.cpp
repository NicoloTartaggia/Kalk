#include<giocatore.h>

Giocatore::Giocatore(std::string n, std::string cgn, int e, std::string cam, std::string cl, std::string naz) :
                                     nome(n), cognome(cgn), eta(e), campionato(cam), club(cl), nazione(naz) {}
Giocatore::~Giocatore() {}

int Giocatore::overall = 0;

std::string Giocatore::stileIntesa = "null";

std::string Giocatore::getNome() const{
    return nome;
}

std::string Giocatore::getCognome() const{
    return cognome;
}

int Giocatore::getEta() const{
    return eta;
}

std::string Giocatore::getCampionato() const{
    return campionato;
}

std::string Giocatore::getClub() const{
    return club;
}
std::string Giocatore::getNazione() const{
    return nazione;
}

int Giocatore::getOverall() const{
    return overall;
}

void Giocatore::setOverall(int i){
    overall=i;
}
