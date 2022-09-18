//
// Created by Marco Morandin on 15/09/2022.
//

#ifndef LEZIONE1_PERSONA_H
#define LEZIONE1_PERSONA_H

#include <string>

using namespace std;

class Persona {
    string nome;
private:
    string cognome;
    int eta, annoNascita;
public:
    Persona();
    Persona(string n, string c, int e=0);
    int getEta()const;
    void setEta(int e);
    void stampa()const;
    ~Persona();
};

void stampa(Persona p); //Per valore
void stampa1(const Persona* pp); //Per indirizzo
void stampa2(const Persona& p); //Per riferimento

ostream& operator << (ostream& os, const Persona& p);

#endif //LEZIONE1_PERSONA_H
