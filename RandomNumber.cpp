#include<iostream>
#include<ctime>
#include<cstdlib>

#include "RandomNumber.h"

/*
* Gerador aleatórico básico chamado na classe de Agenda.
*/
int RandomNumber::getRandomNumber() {
    int random = (double)rand()/(RAND_MAX)+1 +(rand()%9);
    return random%2 + 1;
};
