/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 01/09/2024
Número de ejercicio: 3
Problema planteado: Hipotenusa
*/
#include <iostream>
#include <cmath>
using namespace std;

double calcularHipotenusa(double cat1, double cat2);
int main() {
    double cat1,cat2, hipotenusa;

    cout<< "Ingrese el primer cateto:";
    cin>> cat1;
    cout<< "Ingrese el segundo cateto:";
    cin>> cat2;
    hipotenusa = calcularHipotenusa(cat1, cat2);
    cout<< "La hipotenusa  es " <<hipotenusa << endl; 

    return 0;
}


double calcularHipotenusa(double cat1, double cat2) {

    double hipotenusa = sqrt(pow(cat1, 2) + pow(cat2, 2));
    return hipotenusa;
}