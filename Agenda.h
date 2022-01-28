#include <iostream> 
#include <vector>

#include "Pessoa.h"
using namespace std;

#ifndef AGENDA_H
#define AGENDA_H

class Agenda {
    private:
        vector<Pessoa> _p;
        int _amigos = 0;
        int _conhecidos = 0;
        vector<int> _types;

    public:
        Agenda(int pessoas);
        void addInformacoes();
        void imprimeAniversarios();
        void imprimeEmails();
        void printAgenda();
        int getConhecidos() {return _conhecidos;}
        int getAmigos() {return _amigos;}

};

#endif // AGENDA_H
