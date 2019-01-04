#include<difensore.h>
#include<string>
#include<math.h>


Difensore::Difensore() : velocita(50), tiro(50), passaggio(50), dribbling(50), difesa(50), fisico(50), Giocatore() {}
Difensore::Difensore(std::string n, std::string cgn, int e, std::string cam, std::string cl, std::string naz) : velocita(50),
    tiro(50), passaggio(50), dribbling(50), difesa(50), fisico(50), Giocatore(n,cgn,e,cam,cl,naz) {}

Difensore::~Difensore() {}

double Difensore::calcolaOverallGiocatore() const{
    return ceil((difesa*0.40) + (fisico*0.40) + (velocita*0.07) + (tiro*0.05) + (passaggio*0.05) + (dribbling*0.03));
}

void Difensore::SetStats(int vel, int tir, int pass, int dribb, int dif, int fis){
    velocita=vel;
    tiro=tir;
    passaggio=pass;
    dribbling=dribb;
    difesa=dif;
    fisico=fis;
    setOverall(calcolaOverallGiocatore());
}

std::string Difensore::getAllInfo() const{
    std::string s;
    s.append("\n");
    s.append("-Nome: "); s.append(getNome());
    s.append(" Cognome: "); s.append(getCognome());
    s.append(" Età: "); s.append(std::to_string(getEta()));
    s.append(" Campionato: "); s.append(getCampionato());
    s.append(" Club: "); s.append(getClub());
    s.append(" Nazione: "); s.append(getNazione());
    s.append("\n");
    s.append("Velocità: "); s.append(std::to_string(velocita));
    s.append(" Tiro: "); s.append(std::to_string(tiro));
    s.append(" Passaggio: "); s.append(std::to_string(passaggio));
    s.append(" Dribbling: "); s.append(std::to_string(dribbling));
    s.append(" Difesa: "); s.append(std::to_string(difesa));
    s.append(" Fisico: "); s.append(std::to_string(fisico));
    s.append("\n");
    s.append("Overall: "); s.append(std::to_string(getOverall()));
    s.append("\n");
    return s;
}
