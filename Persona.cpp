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

Persona::Persona(int _dim) {
    eta = 1;
    nome = "NN";
    cognome = "NN";
    annoNascita = 0;
    dim = _dim;
    dati = new int[dim];
}

Persona::Persona(string n, string c, int e) {
    nome = n;
    cognome = c;
    eta = e;
    dim = 5;
    dati = new int[dim];
    for (int i = 0; i < dim; ++i) {
        dati[i] = i;
    }
    cout << "Costr a parametri" << endl;
}

Persona::Persona(const Persona &p) {
    cout << "Costruttore di copia" << endl;
    nome = p.nome;
    cognome = p.cognome;
    eta = p.eta;
    dim = p.dim;
    if(p.dati==NULL){
        dati = NULL;
    } else{
        dati = new int[dim];
        for (int i = 0; i < dim; ++i) {
            dati[i] = p.dati[i];
        }
    }
}

void Persona::stampa()const{
    cout << "Nome: " << nome << endl << "Cognome: " << cognome;
    if(dati != NULL){
        for (int i = 0; i < dim; ++i) {
            cout << " dati["<<i<<"]="<<dati[i];
        }
        cout << endl;
    }
}

Persona::~Persona(){
    cout<<"Distrutta";
    if(dati != NULL){
        delete dati;
    }
}

int Persona::getEta() const {
    return eta;
}

void Persona::setEta(int e) {
    eta = e;
}

string Persona::getNome() const {
    return nome;
}

string Persona::getCognome() const {
    return cognome;
}

int Persona::getAnnoNascita() const {
    return annoNascita;
}

void Persona::setAnnoNascita(int annoNascita) {
    Persona::annoNascita = annoNascita;
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

bool Persona::uguale(const Persona p) const{
    if (eta!=p.eta) { return false; }
    if (dim!=p.dim) { return false; }
    if (dati==NULL && p.dati==NULL) {return true; }
    for(int i=0; i<dim; i++){
        if(dati[i]!=p.dati[i]) { return false; }
    }
    return true;
}

ostream& operator << (ostream& os, const Persona& p){
    return os << p.getEta();
}
