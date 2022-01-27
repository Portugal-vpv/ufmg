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
#include <ctime>
#include <cstdlib>
#include <string>

#include "RandomNumber.h"
#include "Pessoa.h"
#include "Amigo.h"
#include "Conhecido.h"

using namespace std;

int main() {
    srand((unsigned int) time (NULL));
    string test = "Example test";
    Pessoa A;
    Amigo B;
    Conhecido C;

    cout<<A.getIdade()<<endl;
    cout<<A.getNome()<<endl;

    cout<< B.getNome()<<endl;
    cout<<B.getIdade()<<endl;
    cout<<B.getAniversario()<<endl;

    C.setNome("Teste conhecido");
    C.setEmail("testing@email.com");
    cout<<C.getNome()<<endl;
    cout<<C.getIdade()<<endl;
    cout<<C.getEmail()<<endl;

    cout<<C.getNome()<<endl;
    cout<<C.getIdade()<<endl;
    cout<<C.getEmail()<<endl;

    B.setNome("João das Neves");
    B.setAniversario("Janeiro de 1996");
    cout<< B.getNome()<<endl;
    cout<<B.getIdade()<<endl;
    cout<<B.getAniversario()<<endl;

    // for(int i = 0; i < 20; i++) {
    //     cout<<RandomNumber::getRandomNumber()<<endl;
    // };
    
    return 0;
}