#include <iostream>
using namespace std;

int main() {
  int x,y;
  cout<<"Te daremos el resultado de la suma, la diferencia, la multiplicación, los enteros de una división y te mostraremos los residuos de tal división"<<endl;
  cout<<"ingresa el primer número"<< endl;
  cin>> x;
  cout<<"ingresa el segundo número"<< endl;
  cin>> y;
  cout<<"tu resultado de la suma es:"<< x+y << endl << endl;
  cout<<"tu resultado de la resta es:"<< x-y << endl << endl;
  cout<<"tu resultado de la multiplicación es:"<< x*y << endl << endl;
  cout<<"tu resultado de la división es:"<< x/y << endl << endl;
  cout<<"Los residuos de tu división son:"<< x%y << endl << endl;

  return 0;
}
