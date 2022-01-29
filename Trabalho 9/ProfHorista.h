#include <string>

#include "Professor.h"


using namespace std;

#ifndef PROF_HORISTA_H
#define PROF_HORISTA_H

class ProfHorista: public Professor{
    private:
        double nHorasTrabalhadas;
        double valorHora;
    public:
        ProfHorista(string n, double nht, double vh): Professor(n), nHorasTrabalhadas(nht), valorHora(vh) {};
        double getSalario() { return nHorasTrabalhadas * valorHora ;}
        ~ProfHorista() {};
};

#endif