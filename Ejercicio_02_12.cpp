/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 04/09/2024
Número de ejercicio: 12
Problema planteado: serie ascendente descendente
*/
#include <iostream>
using namespace std;

void des(int ini, int fin) ;

void asc(int ini, int fin);
int main() {
    int num1, num2;
    cout<< "Ingrese el primer numero ";
    cin>> num1;
    cout << "Ingrese el segundo numero diferente";
    cin>> num2;
    if (num1 > num2) {
        des(num1, num2);
    } else 
        if (num2 > num1) {
            asc(num1, num2);
    }   
        else {
            cout << "Los numeros deben ser distintos" << endl;
    }

    return 0;
}
void des(int ini, int fin) {
    for (int i= ini; i>= fin; i--) {
        cout<<i<< " ";
    }
    cout<< endl;
}

void asc(int ini, int fin) {
    for (int i = ini; i <= fin; i++) {
        cout << i << " ";
    }
    cout<< endl;
}

