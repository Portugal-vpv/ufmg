#ifndef FUNCAO_H
#define FUNCAO_H

class Funcao {
    public:
        Funcao(){};
        ~Funcao(){};
        virtual double getIntegral(double p0, double pn, double intervalo) = 0;
};
#endif