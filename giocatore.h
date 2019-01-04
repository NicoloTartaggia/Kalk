#ifndef GIOCATORE_H
#define GIOCATORE_H

#include<string>

class Giocatore{
private:
    std::string nome, cognome, campionato, club, nazione;
    int eta;
    static int overall;
    static std::string stileIntesa;
public:
    Giocatore(std::string n = "null", std::string cgn = "null", int e = 0, std::string cam = "null", std::string cl = "null", std::string naz = "null");
    virtual ~Giocatore();

    std::string getNome() const;
    std::string getCognome() const;
    int getEta() const;
    std::string getCampionato() const;
    std::string getClub() const;
    std::string getNazione() const;
    int getOverall() const;
    void setOverall(int);

    virtual void SetStats(int, int, int, int, int, int) =0;
    virtual double calcolaOverallGiocatore() const =0;
    virtual std::string getAllInfo() const =0;
};

#endif // GIOCATORE_H
