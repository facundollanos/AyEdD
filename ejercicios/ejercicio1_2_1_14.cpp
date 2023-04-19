#include <iostream>
using namespace std;


int main(){

   int num;
   cout<<"Ingrese un numero: ";
   cin>>num;

   int i=1;
   int numerador=0;

   while(i<=num){
      if(num%i==0){
         numerador++;
         i++;
      }else{
         i++;

      }
   }

   if(numerador<=2){
      cout<<"Tu numero es primo";
   } else{
      cout<<"Tu numero no es primo";
   }

   return 0;

};
