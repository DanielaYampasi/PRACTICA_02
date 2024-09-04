/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 04/09/2024
Número de ejercicio: 11
Problema planteado: secuencia
*/

#include <iostream>
using namespace std;
int sd(int num);
void sec(int n);
int main() {
  int n;
  cout<< "ingrese el numero de terminos";
  cin>> n;
  sec(n);
  return 0;
}
int sd(int num) {
  int s= 0;
  while (num > 0) {
    s+= num % 10;
    num/= 10;
  }
  return s;
}

void sec(int n) {
  int a = 1, b= 1,c;
  cout<< a << " " <<b<< " ";
  for (int i= 3; i<=n; i++) {
    c= b + sd(b);
    cout<< c << " ";
    a= b;
    b= c;
  }
}

