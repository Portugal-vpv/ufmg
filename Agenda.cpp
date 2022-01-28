#include <iostream>
#include <string>
#include <typeinfo>

#include "RandomNumber.h"
#include "Agenda.h"
#include "Amigo.h"
#include "Conhecido.h"
#include "Pessoa.h"

using namespace std;

Agenda::Agenda(int pessoas) {
    for (int i = 0; i < pessoas; i++) {
        int type = RandomNumber::getRandomNumber();
        if (type == 1)
        {   
            // Amigo A;
            _amigos += 1;
            _p.push_back(new Amigo);
        }

        if (type == 2)
        {   
            // Conhecido C;
            _conhecidos +=1;
            _p.push_back(new Conhecido);
        }

        cout<<this->getType(typeid(*_p[i]).name())<<endl;
    }
};

void Agenda::addInformacoes() {
    for (int i = 0; i <  _p.size(); i++) {
        string nome, idade;

        cout << "Nome: "<< i <<endl;
        getline(cin, nome);
        cout << "Idade: "<< i << endl;
        getline(cin, idade);
        _p[i]->setNome(nome);
        _p[i]->setIdade(stoi(idade));

        if (/*_types[i] == 1*/ true) {
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

void Agenda::imprimeAniversarios() {
    int size = _amigos + _conhecidos;
    for (int i = 0; i < size; i++) {
        if (typeid(*_p[i]).name() == "Amigo") {
             cout << _p[i]->getCustomProperty() <<endl;
        }
    }
}

void Agenda::imprimeEmails() {
    int size = _amigos + _conhecidos;
    for (int i = 0; i < size; i++) {
        if (typeid(*_p[i]).name() == "Conhecido") {
             cout << _p[i]->getCustomProperty() <<endl;
        }
    }
}

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
