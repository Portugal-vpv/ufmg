// Victor Portugal de Vasoncellos
// Trabalho 8 de POO


/**
 * Para rodar os testes do execício 1 basta rodar o comando
 * g++ victor_portugal.cpp Conhecido.cpp Pessoa.cpp Amigo.cpp RandomNumber.cpp Agenda.cpp
 * no terminal ubuntu. Um arquivo a.out será gerado e basta executá-lo com ./a.out
 * **/

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <string>
#include <typeinfo>

#include "RandomNumber.h"
#include "Pessoa.h"
#include "Amigo.h"
#include "Conhecido.h"
#include "Agenda.h"

using namespace std;

int main() {
    srand((unsigned int) time (NULL));
    Agenda agenda(3);
    agenda.printAgenda();
    cout << agenda.getAmigos() <<endl;
    cout << agenda.getConhecidos() <<endl;
    agenda.addInformacoes();
    return 0;
}