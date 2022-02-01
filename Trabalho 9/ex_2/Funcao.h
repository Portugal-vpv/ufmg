#ifndef FUNCAO_H
#define FUNCAO_H

class Funcao {
    private:
        int _n;
    public:
        Funcao(int input): _n(input){};
        ~Funcao(){};
        virtual double getIntegral(double input) = 0;
};
#endif