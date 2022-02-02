#include "Funcao.h"

#ifndef LINEAR_H
#define LINEAR_H

class Linear: public Funcao {
    private:
        double _a, _b;
    public:
        Linear(double a, double b): _a(a), _b(b) {};
        ~Linear(){};
        double getIntegral(double p0, double pn, double intervalo);
        double getLinearPoint(double x);

        //Basic Setters;
        double getA() { return _a; };
        double getB() { return _b; };
};
#endif //LINEAR_H