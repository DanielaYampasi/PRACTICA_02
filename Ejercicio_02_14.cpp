/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 04/09/2024
Número de ejercicio: 14
Problema planteado: cuadrados perfectos
*/

#include <iostream>
#include <cmath>
using namespace std;


void cuadperf(int n);
int main() {
    int n;
    cout<< "Ingrese un valor:";
    cin>> n;
    cuadperf (n);

    return 0;
}
void cuadperf(int n) {
    cout<< "cuadrados perfectos del 1 hasta al" <<n << ":" << endl;
    for (int i=1; i*i<= n; ++i) {
        cout<< i* i << " ";
    }
    cout<< endl;
}