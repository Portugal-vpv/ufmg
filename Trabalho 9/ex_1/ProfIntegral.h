#include <string>

#include "Professor.h"

using namespace std;

#ifndef PROF_INTEGRAL_H
#define PROF_INTEGRAL_H

class ProfIntegral: public Professor {
    private:
        double salarioMensal;
    public:
       ProfIntegral(string n, double sm): Professor(n), salarioMensal(sm){};
       double getSalario() { return salarioMensal ;}
       ~ProfIntegral() {};
};

#endif