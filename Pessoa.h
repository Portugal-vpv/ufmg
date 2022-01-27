#include<iostream> 
#include<string.h>

using namespace std;

#ifndef PESSOA_H
#define PESSOA_H

class Pessoa {
    private:
        string _nome;
        int _idade;

    public:
        Pessoa(string nome, int idade):_nome(nome), _idade(idade){};
        Pessoa(): _nome(__undefined), _idade(0){};
        getNome(){return _nome};
        getIdade(){return _idade};

};

#endif // PESSOA_H