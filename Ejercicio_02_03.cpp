/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 01/09/2024
Número de ejercicio: 3
Problema planteado: Distancia entre dos puntos
*/

#include <iostream>
#include <math.h>
using namespace std;


double dist(int x1, int y1, int x2, int y2);
int main() {
    int x1,x2,y1,y2;
    double distancia;

    cout<< "Ingresw las coordenadas del punto a: ";
    cin>> x1 >> y1;
    cout<< "Ingresw las coordenadas del punto b: ";
    cin>> x2 >> y2;

    distancia = dist(x1, y1, x2, y2);

    cout<< "La distancia entre el punto a y el punto b es" << distancia << endl;

    return 0;
}

double dist(int x1, int y1, int x2, int y2) {
    double distancia= sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    return distancia;
}
