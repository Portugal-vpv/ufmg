#include <iostream>
#include <math.h>

#include "Quadratica.h"

using namespace std;

double Quadratica::getQuadraticaPoint(double x) {
    return pow(x, 2) * this->getA() + x * this->getB() + this->getC(); 
}

double Quadratica::getIntegral(double p0, double pn, double intervalo) {
    if (intervalo <= 0) {
        cout<<"Intervalo não pode ser 0."<<endl;
        return 0;
    }

    double h = (pn - p0)/intervalo;
    double x = p0 + h;
    double soma = 0.0;

    cout<<h <<endl;

    for (int i = 0; i < intervalo; i++) {
        soma += this->getQuadraticaPoint(x);
        x += h;
    }

    return h * ((this->getQuadraticaPoint(p0) + this->getQuadraticaPoint(pn))/2 + soma);

};