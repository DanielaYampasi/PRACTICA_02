/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 01/09/2024
Número de ejercicio: 5
Problema planteado: dia bisciesto
*/
#include <iostream>
using namespace std;

bool bis(int anho) {
    return(anho% 4 ==0 &&anho %100 != 0) || (anho% 400== 0);
}

int dm(int mes, int anho) {

    if (mes==2) {
        if(bis(anho)) {
            return 29;
        } 
        else {
            return 28;
        }
    } 
    else 
        if (mes== 4 || mes== 6 || mes== 9 || mes== 11) {
            return 30;
    } 
        else {
            return 31;
    }
}

int main() {
    int anho, mes;

    cout << "Ingrese un anho ";
    cin >> anho;

    cout << "Ingrese un mes ";
    cin >> mes;

    int dias= dm(mes, anho);
    if(dias!= -1) {
        cout<< "El mes " <<mes << " del anho "<<anho << " tiene " << dias << " dias" << endl;
    }

    return 0;
}