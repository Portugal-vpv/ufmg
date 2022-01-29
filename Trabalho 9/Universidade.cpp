#include <iostream>

#include "Universidade.h"
#include "Professor.h"

using namespace std;

void Universidade::addProfessor(Professor *p) {
    _professors.push_back(p);
};

double Universidade::getTotalPago(void) {
     double salary = 0;   

    for (int i = 0; i < _professors.size(); i++) {
        salary += _professors[i]->getSalario();
    }

    return salary;
};

void Universidade::listProfessors() {
      for (int i = 0; i < _professors.size(); i++) {
        cout<<"Nome: "<<_professors[i]->getName()<<endl;
        cout<<"Salário: "<< _professors[i]->getSalario()<<endl;
        cout<<endl;
    }
}