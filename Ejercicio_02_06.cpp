/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 01/09/2024
Número de ejercicio: 6
Problema planteado: hora en horario
*/
#include <iostream>
using namespace std;

string pd(int h);
int main(){
    int hrs;

    cout<<"Ingrese la hora:";
    cin>>hrs;
    string parte= pd(hrs);
    cout<<"la hora indica que es "<< parte<<endl;

    return 0;
}
string pd(int h){
    if(h>= 5 && h < 12){
        return "manhana";
    }else if(h>= 12 && h<19){
        return "Tarde";
    }else if(h>= 19 && h< 24 || h>= 0 && h< 5){
        return "Noche";
    }else{
        return "hora invalida";
    }
}

