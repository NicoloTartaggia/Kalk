#ifndef CENTROCAMPISTA_H
#define CENTROCAMPISTA_H

#include<giocatore.h>

class Centrocampista: public Giocatore{
private:
    int velocita, tiro, passaggio, dribbling, difesa, fisico;
public:
    Centrocampista();
    Centrocampista(std::string, std::string, int, std::string, std::string, std::string);
    ~Centrocampista();

    std::string getAllInfo() const;
    void SetStats(int, int, int, int, int, int);
    double calcolaOverallGiocatore() const;
};

#endif // CENTROCAMPISTA_H
