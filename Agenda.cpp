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
            Amigo A;
            _amigos += 1;
            _p.push_back(A);
        }

        if (type == 2)
        {   
            Conhecido C;
            _conhecidos +=1;
            _p.push_back(C);
        }
         _types.push_back(type);
    }
};

void Agenda::addInformacoes() {
    for (int i = 0; i <  _p.size(); i++) {
        string nome;
        int idade;

        cout << "Nome: "<< i <<endl;
        cin >> nome;
        cout << "Idade: "<< i << endl;
        cin >> idade;
        _p[i].setNome(nome);
        _p[i].setIdade(idade);

        if (_types[i] == 1) {
            string aniversario;
            cout << "Data aniversário: " << endl;
            cin >> aniversario;
            _p[i].setCustomProperty(aniversario);
        } else {
            string email;
            cout << "Email" << endl;
            cin >> email;
            _p[i].setCustomProperty(email);
        }
        cout <<endl;
        cout << _types[i] <<endl;
    }
}

void Agenda::imprimeAniversarios() {
    int size = _amigos + _conhecidos;
    for (int i = 0; i < size; i++) {
        if (_types[i] == 1) {
             cout << _p[i].getCustomProperty() <<endl;
        }
    }
}

void Agenda::imprimeEmails() {
    int size = _amigos + _conhecidos;
    for (int i = 0; i < size; i++) {
        if (_types[i] == 2) {
             cout << _p[i].getCustomProperty() <<endl;
        }
    }
}

void Agenda::printAgenda() {
    int size = _amigos + _conhecidos;
    for (int i = 0; i < size; i++) {
        cout<<"*************************Contato "<< i << "*******************"<<endl;
        cout << _p[i].getNome() << endl;
        cout << _p[i].getIdade() <<endl; 
        cout << _p[i].getCustomProperty() <<endl;
        cout <<"*************************************************************"<<endl;
    }
};
