#include <iostream>

#include "Universidade.h"
#include "Professor.h"

using namespace std;

void Universidade::addProfessor(Professor *p) {
    _professors.push_back(p);
};

double Universidade::getTotalPago(void) {
    if (_professors.size() < 1) {
        return 0;
    }
    
    for (int i = 0; i < _professors.size(); i++) {
        cout << _professors[i]->getSalario();
    }
};