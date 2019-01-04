#ifndef PORTIERE_H
#define PORTIERE_H

#include<giocatore.h>

class Portiere: public Giocatore{
private:
    int tuffo, presa, rinvio, riflessi, agilita, piazzamento;
public:
    Portiere();
    Portiere(std::string, std::string, int, std::string, std::string, std::string);
    ~Portiere();

    std::string getAllInfo() const;
    void SetStats(int, int, int, int, int, int);
    double calcolaOverallGiocatore() const;
};

#endif // PORTIERE_H
