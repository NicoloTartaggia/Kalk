#include <formazionebase.h>
#include <vector>
#include<iostream>
#include<math.h>
#include<typeinfo>
#include<eccezione.h>

FormazioneBase::FormazioneBase() : NomeSquadra("null"), allenatore("null") {}

FormazioneBase::FormazioneBase(std::string ns, std::vector<int> m, std::string all) : NomeSquadra(ns), allenatore(all) {
    if(checkModulo(m)) modulo=m;
}

FormazioneBase::~FormazioneBase(){
    eliminaSquadra();
    eliminaModulo();
}

void FormazioneBase::aggiungiNomeSquadra(std::string nome){
    NomeSquadra=nome;
}

void FormazioneBase::aggiungiAllenatore(std::string all){
    allenatore=all;
}

void FormazioneBase::aggiungiModulo(std::vector<int> mod){
    if(checkModulo(mod)) modulo=mod;
}

std::string FormazioneBase::getNomeSquadra() const{
    return NomeSquadra;
}

std::vector<int> FormazioneBase::getModulo() const{
    return modulo;
}

std::string FormazioneBase:: getAllenatore() const{
    return allenatore;
}

std::vector<Giocatore *> FormazioneBase::getTitolari() const{
    return titolari;
}
bool FormazioneBase::SquadraCompleta() const{
    if(titolari.size() < 11) return false;
    return true;
}

void FormazioneBase::aggiungiTitolare(Giocatore* g){
    if(!SquadraCompleta()) titolari.push_back(g);
}

//verifica se la squadra è vuota
bool FormazioneBase::isEmpty() const{
    if(!titolari.size()) return true;
    return false;
}

void FormazioneBase::eliminaGiocatore(){
    if(!isEmpty()){
        delete titolari.back();
        std::vector<Giocatore*>::iterator i=titolari.end();
        i--;
        titolari.erase(i);
    }
}

void FormazioneBase::eliminaSquadra(){
    for(std::vector<Giocatore*>::iterator i=titolari.begin(); i!=titolari.end(); ++i){
        delete *i;
        i=titolari.erase(i);
        i--;
    }
}

void FormazioneBase::eliminaModulo(){
    for(std::vector<int>::iterator i=modulo.begin(); i!=modulo.end(); ++i){
        i=modulo.erase(i);
        i--;
    }
}

int FormazioneBase::calcolaOverallTitolari() const{
    double valutazione = 0.0;
    for(std::vector<Giocatore*>::const_iterator i=titolari.begin(); i!=titolari.end(); ++i){
        valutazione += (*i)->calcolaOverallGiocatore();
    }
    if(titolari.size() == 0) return valutazione;
    else return floor(valutazione/titolari.size());
}

bool FormazioneBase::checkPortiere() const{
    bool nonpresente = true;
    for(std::vector<Giocatore*>::const_iterator i=titolari.begin(); i!=titolari.end() && nonpresente; ++i){
        if(typeid(**i) == typeid(Portiere)){
            nonpresente = false;
        }
    }
    return nonpresente;
}

bool FormazioneBase::checkDifesa() const{
    int numDifensori = 0;
    for(std::vector<Giocatore*>::const_iterator i=titolari.begin(); i!=titolari.end(); ++i){
        if(typeid(**i) == typeid(Difensore)){
            numDifensori++;
        }
    }
    if(numDifensori < modulo[0]) return true;
    else return false;
}

bool FormazioneBase::checkCentrocampo() const{
    int numCentrocampisti = 0;
    for(std::vector<Giocatore*>::const_iterator i=titolari.begin(); i!=titolari.end(); ++i){
        if(typeid(**i) == typeid(Centrocampista)) numCentrocampisti++;
    }
    if(modulo.size() == 3){
        if(numCentrocampisti < modulo[1]) return true;
        else return false;
    } else if(modulo.size() == 4){
        if(numCentrocampisti < (modulo[1] + modulo[2])) return true;
        else return false;
    } else if (modulo.size() == 5){
        if(numCentrocampisti < modulo[1] + modulo[2] + modulo[3]) return true;
        else return false;
    }
}

bool FormazioneBase::checkAttacco() const{
    int numAttaccanti = 0;
    for(std::vector<Giocatore*>::const_iterator i=titolari.begin(); i!=titolari.end(); ++i){
        if(typeid(**i) == typeid(Attaccante)) numAttaccanti++;
    }
    if(modulo.size() == 3){
        if(numAttaccanti < modulo[2]) return true;
        else return false;
    } else if(modulo.size() == 4){
        if(numAttaccanti < modulo[3]) return true;
        else return false;
    } else if (modulo.size() == 5){
        if(numAttaccanti < modulo[4]) return true;
        else return false;
    }
}

int FormazioneBase::sommaGiocatoriModulo(std::vector<int> v) const{
    int tot = 0;
    for(std::vector<int>::const_iterator i=v.begin(); i!=v.end(); ++i) tot = tot + *i;
    return tot;
}

bool FormazioneBase::checkModulo(std::vector<int> v) const{
    if(v.size() == 3){
        if((v[0] >= 3 && v[0] <=5) && (v[1] >= 3 && v[1] <= 5) && (v[2] >= 1 && v[2] <= 3) && sommaGiocatoriModulo(v) == 10) return true;
    } else if (v.size() == 4){
        if((v[0] >= 3 && v[0] <=5) && (v[1] >= 1 && v[1] <= 4) && (v[2] >= 1 && v[2] <= 4) && (v[3] ==1 || v[3] == 2) && sommaGiocatoriModulo(v) == 10) return true;
    } else if (v.size() == 5){
        if(v[0] == 4 && v[1] == 1 && v[2] == 2 && v[3] == 1 && v[4] == 2 && sommaGiocatoriModulo(v) == 10) return true;
    }
}
