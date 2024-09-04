/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 03/09/2024
Número de ejercicio: 9
Problema planteado: es o nofibonnacci
*/
#include <iostream>
using namespace std;

bool fib(int n);
int main() {
    int num;
    cout<< "ingrese un numero:";
    cin>> num;
    if (fib(num))
        cout << num <<" es fibonnanci"<< endl;
    else 
        cout<<num <<" no es fibonanci" << endl;
    return 0;
}
bool fib(int n) {
    int a =0, b =1;
    while (b<=n) {
        if (b==n) return true;
        int c=a+b;
        a= b;
        b= c;
    }
    return false;
}
