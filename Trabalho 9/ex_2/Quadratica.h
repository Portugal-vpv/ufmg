#include "Funcao.h"

#ifndef QUADRATICA_H
#define QUADRATICA_H
    class Quadratica: public Funcao {
        private:
            double _a, _b, _c;
        
        public:
            Quadratica(double a, double b, double c):  _a(a), _b(b), _c(c) {};
            ~Quadratica(){};
            double getIntegral(double p0, double pn, double intervalo);
            double getQuadraticaPoint(double x);

            // Basic getters.
            double getA() { return _a; };
            double getB() { return _b; };
            double getC() { return _c; };
    };
#endif