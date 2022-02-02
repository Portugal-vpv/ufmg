#include "Funcao.h"

#ifndef SENOIDAL_H
#define SENOIDAL_H
    class Senoide: public Funcao {
        public:
            Senoide() {};
            ~Senoide(){};
            double getIntegral(double p0, double pn, double intervalo);
            double getSenoidePoint(double x);
    };
#endif //SENOIDAL_H