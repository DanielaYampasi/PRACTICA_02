/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 03/09/2024
Número de ejercicio: 8
Problema planteado: fibonnacci
*/
#include <iostream>
using namespace std;

void fib(int n);
int main() {
    int num;
    cout<< "ingrese la cantidad de numeros a mostrar de la serie fibonnanci:";
    cin>> num;
    fib(num);
    return 0;
}

void fib(int n) {
    int a=0, b=1, c;
    for(int i=0; i < n; i++){
        cout<<a <<" ";
        c=a+b;
        a=b;
        b=c;
    }
}
