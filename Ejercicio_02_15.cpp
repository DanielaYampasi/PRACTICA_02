/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 04/09/2024
Número de ejercicio: 15
Problema planteado: aleatorio literal 
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string numelet(int num);
int main() {
    srand(time(0));
    int numero= rand() % 100;
    cout<< "El numero aleatoroio es"<< numero<< endl;
    cout<< "literal: " << numelet(numero)<< endl;

    return 0;
}
string numelet(int num) {
    string resultado;
    if (num== 0) {
        return "cero";
    }

    int decenas= num/10;
    switch (decenas) {
        case 1:
            if (num% 10== 0) {
                resultado = "diez";
            } 
            else 
                    if (num% 10== 1) {
                     resultado = "once";
            }       else 
                        if (num% 10 == 2) {
                        resultado = "doce";
            }           else 
                            if (num% 10 == 3) {
                             resultado = "trece";
            }               else 
                                if (num% 10== 4) {
                                    resultado = "catorce";
            }                    else 
                                    if (num% 10 == 5) {
                                     resultado = "quince";
            }                       else {
                                       resultado = "dieci" + to_string(num % 10);
                                        }
            break;
        case 2: resultado = "veinte"; break;
        case 3: resultado = "treinta"; break;
        case 4: resultado = "cuarenta"; break;
        case 5: resultado = "cincuenta"; break;
        case 6: resultado = "sesenta"; break;
        case 7: resultado = "setenta"; break;
        case 8: resultado = "ochenta"; break;
        case 9: resultado = "noventa"; break;
    }

    if (decenas!= 0 && num%10 != 0) {
        resultado+=" y ";
    }
    if (num % 10 != 0 || decenas == 0) {
        switch (num % 10) {
            case 1: resultado+= "uno"; break;
            case 2: resultado += "dos" ; break;
            case 3: resultado += "tres" ; break;
            case 4: resultado += "cuatro" ; break;
            case 5: resultado += "cinco" ; break;
            case 6: resultado += "seis" ; break;
            case 7: resultado += "siete"; break;
            case 8: resultado += "ocho"; break;
            case 9: resultado += "nueve"; break;
        }
    }

    return resultado;
}

