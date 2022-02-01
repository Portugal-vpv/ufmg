#include "Funcao.h"

#ifndef QUADRATICA_H
#define QUADRATICA_H
    class Quadratica: public Funcao {
        private:
            int _a, _b, _c;
        
        public:
            Quadratica(int input, int a, int b, int c): Funcao(input), _a(a), _b(b), _c(c) {};
            ~Quadratica(){};
            double getIntegral(int p0, int pn, int intervalo);

    };
#endif