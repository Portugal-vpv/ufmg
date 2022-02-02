#include <iostream>

#include "Linear.h"

using namespace std;

double Linear::getLinearPoint(double x) {
    return this->getA() * x + this->getB();
}

double Linear::getIntegral(double p0, double pn, double intervalo) {
    if (intervalo <= 0) {
        cout<<"Intervalo não pode ser 0."<<endl;
        return 0;
    }

    double h = (pn - p0)/intervalo;
    double x = p0 + h;
    double soma = 0.0;

    for (int i = 0; i < intervalo; i++) {
        soma += this->getLinearPoint(x);
        x += h;
    }

    return h * ((this->getLinearPoint(p0) + this->getLinearPoint(pn))/2 + soma);

};