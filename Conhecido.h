#include<iostream> 
#include<string.h>

#include "Pessoa.h"
using namespace std;

#ifndef CONHECIDO_H
#define CONHECIDO_H

class Conhecido: public Pessoa {
    private:
        string _email;
    public:
        Conhecido(void):Pessoa(), _email("undefined") {};
        void setEmail(string email) {_email = email;}
        string getEmail(void) {return _email;}
        

};

#endif // CONHECIDO_H