#include <iostream>
using namespace std;


int main(){
   int suma;
   int cantidad;
   int i=0;
   cout<<"Ingrese la cantidad de veces a muiltiplicar: ";
   cin>>cantidad;
   cout<<"Ingrese el numero  a muiltiplicar: ";
   cin>>suma;
   int resto = 0;


   while(i<cantidad){

      resto+=suma;

      i++;

}


   cout<<resto;
   return 0;

};
