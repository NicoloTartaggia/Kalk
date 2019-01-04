#ifndef ATTACCANTE_H
#define ATTACCANTE_H

#include<giocatore.h>

class Attaccante: public Giocatore{
private:
    int velocita, tiro, passaggio, dribbling, difesa, fisico;
public:
    Attaccante();
    Attaccante(std::string, std::string, int, std::string, std::string, std::string);
    ~Attaccante();

    std::string getAllInfo() const;
    void SetStats(int, int, int, int, int, int);
    double calcolaOverallGiocatore() const;
};

#endif // ATTACCANTE_H
