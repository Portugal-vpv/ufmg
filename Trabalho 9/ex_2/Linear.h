#include "Funcao.h";

#ifndef LINEAR_H
#define LINEAR_H

class Linear: public Funcao {
    private:
        int _a, _b;
    public:
        Linear(int a, int b):Funcao(a),_a(a), _b(b) {};
        ~Linear(){};
        double getIntegral();
};
#endif //LINEAR_H