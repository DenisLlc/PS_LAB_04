//Autor: Llamoca Cervantes, Denis Alfredo
//Universidad Nacional de San Agustin
//Ingeniería de Sistemas

#include "Pascal.h"
#include <iostream>
using namespace std;

int main() {
    int filas = 0;
    cout<<"\n--Triangulo de Pascal--"<<endl;
    cout<<"Numero de filas: ";
    cin>>filas;
    Pascal trian(filas);
    trian.dibujarTriangulo();

    return 0;
}