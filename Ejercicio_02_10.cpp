/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 03/09/2024
Número de ejercicio: 10
Problema planteado: digitos
*/
#include <iostream>

using namespace std;
#include <iostream>

using namespace std;


bool igu(int num);
int main() {
    int num;
    cout<< "ingrese un numero";
    cin>> num;
    if (igu(num)) cout << "tiene digitos iguales" << endl;
    else cout << "tiene digitos diferentes" << endl;
    return 0;
}

bool igu(int num) {
    int a, b;
    while (num > 0) {
        b = num % 10;
        num/= 10;
        a= num % 10;
        if (a==b) 
            return true;
    }
    return false;
}