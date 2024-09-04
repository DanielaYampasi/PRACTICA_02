/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 04/09/2024
Número de ejercicio: 13
Problema planteado: aleatorios y asterisco 5
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void al(int cantidad);

int main() {
    int c;
    cout<< "Ingrese la cantidad de numeros aleatorios ";
    cin>> c;
    al(c);

    return 0;
}

void al(int cantidad) {
    srand(time(0)); // Inicializa el generador de números aleatorios

    for (int i= 0; i< cantidad; ++i) {
        int num= rand()% 100 + 1; // Genera un número aleatorio entre 1 y 100
        cout<< num;
        if (num% 5 == 0) {
            cout<< "*";
        }
        cout<< " ";
    }
    cout<< endl;
}