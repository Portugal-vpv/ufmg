#include "Funcao.h"

#ifndef SENOIDAL_H
#define SENOIDAL_H
    class Senoide: public Funcao {
        public:
            Senoide(int input): Funcao(input) {};
            ~Senoide(){};
            double getIntegral(int p0, int pn, int intervalo);
    };
#endif //SENOIDAL_H