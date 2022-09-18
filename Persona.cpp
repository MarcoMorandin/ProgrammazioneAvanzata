//
// Created by Marco Morandin on 15/09/2022.
//

#include <iostream>

#include "Persona.h"

using namespace std;

Persona::Persona() {
    nome = "NN"; cognome = "NN"; eta = 0; annoNascita = 2022;
    cout << "Costr a 0 param" << endl;
}

Persona::Persona(string n, string c, int e) {
    nome = n;
    cognome = c;
    eta = e;
    cout << "Costr a parametri" << endl;
}

int Persona::getEta() const {
    return eta;
}

void Persona::setEta(int e) {
    eta = e;
}

void Persona::stampa()const{
    cout << "Nome: " << nome << endl << "Cognome: " << cognome;
}

Persona::~Persona(){
    cout<<"Distrutta";
    //Devo deallocare tutte le strutture dati con delete
}

void stampa(Persona p){
    p.stampa();
}

void stampa1(const Persona* pp){
    pp->stampa();
}

void stampa2(const Persona& p){
    p.stampa();
}

ostream& operator << (ostream& os, const Persona& p){
    return os << p.getEta();
}
