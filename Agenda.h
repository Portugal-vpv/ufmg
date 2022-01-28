#include <iostream> 
#include <vector>

#include "Pessoa.h"
using namespace std;

#ifndef AGENDA_H
#define AGENDA_H

class Agenda {
    private:
        vector<Pessoa> _p;
        int _amigos;
        int _conhecidos;

    public:
        Agenda(int pessoas);
        // void addInformações();
        // void imprimeAniversarios();
        // void imprimeEmails();
        void printAgenda();

};

#endif // AGENDA_H
