#include<iostream> 
#include<string>

#include "Pessoa.h"
using namespace std;

#ifndef AMIGO_H
#define AMIGO_H

class Amigo: public Pessoa {
    private:
        string _dataAniversario;
    
    public:
        Amigo(void):Pessoa(), _dataAniversario("undefined") {};
        string getAniversario() {return _dataAniversario;}
        void setAniversario(string dataAniversario) {_dataAniversario = dataAniversario;}
        void setCustomProperty(string data) {this->setAniversario(data);}
        string getCustomProperty(void) { return this->getAniversario(); }


};

#endif // AMIGO_H
