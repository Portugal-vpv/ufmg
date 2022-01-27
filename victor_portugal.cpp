// Victor Portugal de Vasoncellos
// Trabalho 8 de POO


/**
 * Para rodar os testes do execício 1 basta rodar o comando
 * g++ victor_portugal.cpp Conhecido.cpp Pessoa.cpp Amigo.cpp RandomNumber.cpp
 * no terminal ubuntu. Um arquivo a.out será gerado e basta executá-lo com ./a.out
 * **/

#include <iostream>
#include <vector>
#include <string>
#include<ctime>
#include<cstdlib>
// #include "Ponto3D.h"
// #include "Ponto2D.h"
#include "RandomNumber.h"

using namespace std;

int main() {
    srand((unsigned int) time (NULL));

    for(int i = 0; i < 20; i++) {
        cout<<RandomNumber::getRandomNumber()<<endl;
    };

    return 0;
}