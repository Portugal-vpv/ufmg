// Victor Portugal de Vasoncellos
// Trabalho 9 de POO ex 2


/**
 * Para rodar os testes do execício 2 basta rodar o comando
 * g++ victor_portugal.cpp Linear.cpp Quadratica.cpp
 * **/

#include <iostream>
#include <string>

#include "Funcao.h"
#include "Linear.h"
#include "Quadratica.h"
#include "Senoide.h"

using namespace std;

int main() {
    Funcao *a;
    a = new Linear(1, 0);
    cout << a->getIntegral(0, 6, 1000) << endl;

    Funcao *b;
    b = new Quadratica(6, 0, 0);
    cout << b->getIntegral(0, 2, 1000) <<endl;
    return 0;
}