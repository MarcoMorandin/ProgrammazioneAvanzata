//
// Created by Marco Morandin on 15/09/2022.
//

#ifndef LEZIONE1_PERSONA_H
#define LEZIONE1_PERSONA_H

#include <string>

using namespace std;

class Persona {

private:
    string nome;
    string cognome;
    int eta, annoNascita, dim;
    int* dati;
public:
    Persona();
    Persona(string n, string c, int e=0);
    Persona(int _dim);
    Persona(const Persona &p);

    string getNome() const;
    string getCognome() const;

    int getEta()const;
    void setEta(int e);

    int getAnnoNascita() const;
    void setAnnoNascita(int annoNascita);

    bool uguale(const Persona p) const;

    void stampa()const;

    ~Persona();
};

void stampa(Persona p); //Per valore
void stampa1(const Persona* pp); //Per indirizzo
void stampa2(const Persona& p); //Per riferimento

ostream& operator << (ostream& os, const Persona& p);

#endif //LEZIONE1_PERSONA_H
