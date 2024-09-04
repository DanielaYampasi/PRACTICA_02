/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 01/09/2024
Número de ejercicio: 7
Problema planteado: tabla de multiplicar
*/

#include <iostream>
using namespace std;

void tdm(int n);
int main(){
    int num;
    cout<< "ingrese un numero:";
    cin>> num;
    tdm(num);
    return 0;
}
void tdm(int n){
    for(int i=1; i<= 10; i++){
        cout<<n << "x" << i <<"= " << n* i <<endl;
    }
}

