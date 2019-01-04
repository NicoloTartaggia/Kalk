#ifndef DIFENSORE_H
#define DIFENSORE_H

#include<giocatore.h>

class Difensore: public Giocatore{
private:
    int velocita, tiro, passaggio, dribbling, difesa, fisico;
public:
    Difensore();
    Difensore(std::string, std::string, int, std::string, std::string, std::string);
    ~Difensore();

    std::string getAllInfo() const;
    void SetStats(int, int, int, int, int, int);
    double calcolaOverallGiocatore() const;

};

#endif // DIFENSORE_H
