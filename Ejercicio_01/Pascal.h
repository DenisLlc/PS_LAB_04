//Autor: Llamoca Cervantes, Denis Alfredo
//Universidad Nacional de San Agustin
//Ingeniería de Sistemas

#ifndef PASCAL_H
#define PASCAL_H

class Pascal {
    private:
        int filas;
    public:
        Pascal();
        Pascal(int);
        void setAltura(int);
        int getAltura();
        void dibujarTriangulo();
        unsigned factorial(unsigned);
};

#include "Pascal.cpp"
#endif