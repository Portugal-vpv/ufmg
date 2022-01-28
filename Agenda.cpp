#include <iostream>
#include <string>
#include <typeinfo>

#include "RandomNumber.h"
#include "Agenda.h"
#include "Amigo.h"
#include "Conhecido.h"
#include "Pessoa.h"

using namespace std;
/*
*   Recebe um construtor com um número inteiro de contatos, e 
*   a partir de um gerador aleatório decide entre 1 e 2 se será
*   salvo um amigo ou um conhecido.
*/
Agenda::Agenda(int pessoas) {
    for (int i = 0; i < pessoas; i++) {
        int type = RandomNumber::getRandomNumber();
        if (type == 1)
        {   
            _amigos += 1;
            _p.push_back(new Amigo);
        }

        if (type == 2)
        {   
            _conhecidos +=1;
            _p.push_back(new Conhecido);
        }
    }
};

/*
* Itera sobre a agenda recolhendo dados de nome e idade; 
* Recebe data de aniversário se amigo, e email se conhecida.
* Utiliza a função auxiliar getType definida abaixo para discernir
* Entre amigo e conhecido.
*/
void Agenda::addInformacoes() {
    for (int i = 0; i <  _p.size(); i++) {
        string nome, idade;

        cout << "Nome: " <<endl;
        getline(cin, nome);
        cout << "Idade: "<< endl;
        getline(cin, idade);
        _p[i]->setNome(nome);
        _p[i]->setIdade(stoi(idade));

        if (this->getType(typeid(*_p[i]).name()) == 1) {
            string aniversario;
            cout << "Data aniversário: " << endl;
            getline(cin, aniversario);
            _p[i]->setCustomProperty(aniversario);
        } else {
            string email;
            cout << "Email" << endl;
            getline(cin, email);
            _p[i]->setCustomProperty(email);
        }
        cout <<endl;
    }
}

/*
* Itera sobre a agenta checando o tipo de Pessoa através da função 
* Auxiliar getType definida abaixo.
*/
void Agenda::imprimeAniversarios() {
    int size = _amigos + _conhecidos;
    for (int i = 0; i < size; i++) {
         if (this->getType(typeid(*_p[i]).name()) == 1) {
             cout << _p[i]->getCustomProperty() <<endl;
        }
    }
}

/*
* Itera sobre a agenta checando o tipo de Pessoa através da função 
* Auxiliar getType definida abaixo.
*/
void Agenda::imprimeEmails() {
    int size = _amigos + _conhecidos;
    for (int i = 0; i < size; i++) {
        if (this->getType(typeid(*_p[i]).name()) == 2) {
             cout << _p[i]->getCustomProperty() <<endl;
        }
    }
}

/*
* Printa toda agenda.
*/
void Agenda::printAgenda() {
    int size = _amigos + _conhecidos;
    for (int i = 0; i < size; i++) {
        cout<<"*************************Contato "<< i << "*******************"<<endl;
        cout << _p[i]->getNome() << endl;
        cout << _p[i]->getIdade() <<endl; 
        cout << _p[i]->getCustomProperty() <<endl;
        cout <<"*************************************************************"<<endl;
    }
};

/*
* Checa se a string recebida inclui "Amigo" ou "Conhecido".
* O parâmetro typeid(*_p[i]).name() foi utilizado como parâmetro
* para checar o typo da classe.
*/
int Agenda::getType(string str) {
    string amigo = "Amigo", conhecido = "Conhecido";

    if (str.find(amigo) != string::npos) {
        return 1;
    }
    
    if (str.find(conhecido) != string::npos) {
        return 2;
    }

    return 0;
};
