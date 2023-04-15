#include <iostream>
using namespace std;


int main(){

   int f;

   cout<<"Ingrese una fecha en formato aaaammdd: ";
   cin>>f;


   int anio = f/10000;
   int mes = (f/100)%100;
   int dia = f%100;


   cout<<anio<<endl;
   cout<<mes<<endl;
   cout<<dia<<endl;


   return 0;

};
