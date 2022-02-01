#include "Funcao.h";

#ifndef LINEAR_H
#define LINEAR_H

class Linear: public Funcao {
    private:
        int _a, _b;
    public:
        Linear(int input, int a, int b):Funcao(input),_a(a), _b(b) {};
        ~Linear(){};
        double getIntegral(int p0, int pn, int intervalo);
};
#endif //LINEAR_H