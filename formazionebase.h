#ifndef FORMAZIONEBASE_H
#define FORMAZIONEBASE_H

#include<string>
#include<difensore.h>
#include<centrocampista.h>
#include<attaccante.h>
#include<portiere.h>
#include<vector>

class FormazioneBase{
private:
    std::string NomeSquadra, allenatore;
    std::vector<int> modulo;
    std::vector<Giocatore*> titolari;
public:
    FormazioneBase();
    FormazioneBase(std::string, std::vector<int>, std::string);

    void aggiungiModulo(std::vector<int>);
    void aggiungiAllenatore(std::string);
    void aggiungiNomeSquadra(std::string);

    void aggiungiTitolare(Giocatore *);
    bool isEmpty() const;
    void eliminaGiocatore();
    void eliminaSquadra();
    void eliminaModulo();
    int calcolaOverallTitolari() const;
    bool SquadraCompleta() const;
    bool checkPortiere() const;
    bool checkDifesa() const;
    bool checkCentrocampo() const;
    bool checkAttacco() const;
    int sommaGiocatoriModulo(std::vector<int>) const;
    bool checkModulo(std::vector<int>) const;

    std::string getNomeSquadra() const;
    std::vector<int> getModulo() const;
    std::string getAllenatore() const;
    std::vector<Giocatore*> getTitolari() const;
    ~FormazioneBase();
};


#endif // FORMAZIONEBASE_H
