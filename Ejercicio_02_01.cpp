/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 01/09/2024
Número de ejercicio: 1
Problema planteado: segundos a tiempo
*/
#include <iostream>
using namespace std;

void tiempo(int segundos);

int main() {
    int segundos;

    cout<< "Ingresa un tiempo en segundos ";
    cin>> segundos;
    tiempo(segundos);

    return 0;
}

void tiempo(int segundos) {
    int horas= segundos/60/60;
    segundos%= 60*60;
    int minutos= segundos/ 60;
    segundos%= 60;

    cout<< horas << " hora/s " << minutos << " minuto/s y" << segundos << " segundo/s " <<endl;
}