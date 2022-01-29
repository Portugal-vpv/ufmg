#include <string>
#include <vector>
#include "Professor.h"

using namespace std;

#ifndef  UNIVERSIDADE_H
#define UNIVERSIDADE_H

class Universidade {
    private:
        vector <Professor *> _professors;
    
    public:
        Universidade(){};
        void addProfessor(Professor * p);
        double getTotalPago(void);
        ~Universidade(){};
};
#endif