//Autor: Llamoca Cervantes, Denis Alfredo
//Universidad Nacional de San Agustin
//Ingeniería de Sistemas

#include "Pascal.h"
#include <iostream>
using namespace std;

Pascal::Pascal() {}

Pascal::Pascal(int alt) {
    this->filas = alt;
}

void Pascal::setAltura(int alt) {
    this->filas = alt;
}

int Pascal::getAltura(){
    return filas;
}

unsigned Pascal::factorial(unsigned num) {
    int resultado = 0;
    if(num == 0) {
        resultado = 1;
    }else {
        resultado = 1;
        for(int i = num; i > 0; i--) {
            resultado *= i;
        }
    }
    return resultado;
}

void Pascal::dibujarTriangulo() {

    int columnas = 0;
    int calculo = 0;
    int posicion = 0;

    for(int i = filas-1; i >= 0; i--) {
        columnas += i;
    }

    int triangulo[columnas];

    for(int i = 0; i < filas-1; i++){
        for(int j = 0; j <= i; j++){
            calculo =factorial(i)/(factorial(j)*factorial(i-j));
            triangulo[posicion] = calculo;
            posicion++;
        }
    }

    //dibujar triangulo

    posicion = 0;
    for(int i = 0; i < filas-1; i++){
        printf("\n%*c",(int) (columnas/2)-i,' ');
        for(int j = 0 ; j <= i; j++) {
            printf("%d ",triangulo[posicion]);
            posicion++;
        }
    }
    cout<<"\n"<<endl;
}