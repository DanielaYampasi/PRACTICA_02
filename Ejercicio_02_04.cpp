/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 01/09/2024
Número de ejercicio: 4
Problema planteado: es o no rectangulo
*/
#include <iostream>
#include <cmath>
using namespace std;

bool tr(int a, int b, int c);

int main() {
    int a,b,c;

    cout << "ingrese tres lados del triaangulo:";
    cin>>a>>b>>c;
    if (tr(a,b,c)) {
        cout << "es un triangulo rectangulo" << endl;
    } 
    else {
        cout << "no es un triangulo rectangulo" << endl;
    }

    return 0;
}

bool tr(int a, int b, int c) {
    if (c*c == a*a + b*b) {
        return true;
    } 
    else 
        if (a*a == b*b + c*c) {
            return true;
    } 
        else 
            if (b*b == a*a + c*c) {
            return true;
    } 
    else {
        return false;
    }
}