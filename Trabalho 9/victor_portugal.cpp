// Victor Portugal de Vasoncellos
// Trabalho 9 de POO


/**
 * Para rodar os testes do execício 1 basta rodar o comando
 * g++ victor_portugal.cpp Professor.cpp ProfHorista.cpp ProfIntegral.cpp Universidade.cpp
 * **/

#include <iostream>
#include <string>

#include "Professor.h"
#include "ProfHorista.h"
#include "ProfIntegral.h"
#include "Universidade.h"

using namespace std;

int main() {
    string name_0 = "Joseph Jackson",
           name_1 = "Victor Portugal",
           name_2 = "Carmen Miranda",
           name_3 = "Maria Luisa Campos";

    double nHorasTrabalhadas_0 = 60.0,
           nHorasTrabalhadas_1 = 80.0;

    double valorHora_0 = 85.00,
           valorHora_1 = 50.00;

    double salarioMensal_2 = 16875.65,
           salarioMensal_3 = 22357.85;
    
    Universidade uni;
    ProfHorista profHorista_0(name_0, nHorasTrabalhadas_0, valorHora_0),
                profHorista_1(name_1, nHorasTrabalhadas_1, valorHora_1);
    
    ProfIntegral profIntegral_2(name_2, salarioMensal_2), 
                 profIntegral_3(name_3, salarioMensal_3);
           
    
    return 0;
}