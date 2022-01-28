#include<iostream> 
#include<string>

using namespace std;

#ifndef PESSOA_H
#define PESSOA_H

class Pessoa {
    private:
        string _nome;
        int _idade;

    public:
        Pessoa(string &nome, int idade):_nome(nome),_idade(idade){ };
        Pessoa(void):_nome("undefined"), _idade(0){};
        virtual ~Pessoa();
        string getNome(void) {return _nome;}
        int getIdade(void) {return _idade;}
        void setNome(string nome) {_nome = nome;}
        void setIdade(int idade) {_idade = idade;}
        virtual void setCustomProperty(string data);
        virtual string getCustomProperty(void);
};

#endif // PESSOA_H