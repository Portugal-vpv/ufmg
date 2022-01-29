using namespace std;

#ifndef PROFESSOR_H
#define PROFESSOR_H

class Professor {
    private:
        string nome;

    public:
        Professor(string n):nome(n){};
        string getName() const { return nome;}
        virtual double getSalario() = 0;
        virtual ~Professor() {};
};

#endif