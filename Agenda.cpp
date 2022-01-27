#include <iostream>
#include <string>

#include "RandomNumber.h"
#include "Agenda.h"
#include "Amigo.h"
#include "Conhecido.h"

using namespace std;

Agenda::Agenda(int pessoas) {
    for (int i =0; i < pessoas; i++) {
        int type = RandomNumber::getRandomNumber();
        if (type == 1) {
            _p.push_back(Amigo A);
        }

        if (type == 2) {
            _p.push_back(Conhecido C);
        }
    }
};

void Agenda::print() {
    int length = _p.capacity();
    for (int i = 0; i < length; i++) {
        cout<<_p.pop_back().getName()<<endl;
    }
}