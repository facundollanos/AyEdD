#include <iostream>
using namespace std;

int main()
{

   int numero,a=9999999,b=-1;
   cout<<"Ingresa un numero por favor: ";


   do
   {
      cin>>numero;
      if(numero>=1){
         if(numero<a){
            a=numero;
         }


      }else if(numero<-1){
         if(numero<b){
                     b=numero;
                  }
      }
   }
   while(numero!=0);

   cout<<"El numero mas chico es: "<<a<<endl;
   cout<<"El numero mas grande es: "<<b<<endl;


   return 0;

};
