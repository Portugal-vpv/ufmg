#include <iostream>
#include <math.h>

#include "Senoide.h"

using namespace std;

double Senoide::getSenoidePoint(double x) {
    return sin(x)/x;
}

double Senoide::getIntegral(double p0, double pn, double intervalo) {
    if (intervalo <= 0) {
        cout<<"Intervalo não pode ser 0."<<endl;
        return 0;
    }

    if (p0 == 0) {
        cout<<"Não é possível efetuar divisão por zero."<<endl;
        return 0;
    }



    double h = (pn - p0)/intervalo;
    double x = p0 + h;
    double soma = 0.0;

    for (int i = 0; i < intervalo; i++) {
        soma += this->getSenoidePoint(x);
        x += h;
    }

    return h * ((this->getSenoidePoint(p0) + this->getSenoidePoint(pn))/2 + soma);
}