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
#include <iomanip>

#include "RandomNumber.h"
#include "Pessoa.h"
#include "Amigo.h"
#include "Conhecido.h"
#include "Agenda.h"

using namespace std;

int main() {
    // Starta o contador randomico para a classe RandomNumber.
    srand((unsigned int) time (NULL));

    // Permite espaços em branco no input de strings.
    cin >> noskipws;

    Agenda agenda(5); // Para variar o tamanho da agenda basta variar o numero instanciado aqui.
    agenda.addInformacoes();
    cout<<"Numero de amigos"<<endl; 
    cout << agenda.getAmigos() <<endl;
    cout<<"Numero de conhecidos"<<endl;
    cout << agenda.getConhecidos() <<endl;

    // Para ver a agenda toda basta descomentar a linha abaixo.
    //agenda.printAgenda();

    // Printa os aniversários.
    cout<<"*************************ANIVERSARIOS**********************"<<endl;
    agenda.imprimeAniversarios();

    // Printa os emails.
    cout << "********************EMAILS********************"<<endl;
    agenda.imprimeEmails();
    return 0;
}