#include <iostream>
#include <string>

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
    }
};

void Agenda::printAgenda() {
    int length = _p.capacity();
    for (int i = 0; i < length; i++) {
        Pessoa p = _p[i];
        cout << p.getNome() << endl;
    }
}