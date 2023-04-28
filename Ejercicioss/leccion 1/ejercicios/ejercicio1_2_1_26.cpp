#include <iostream>
using namespace std;

int main()
{

   int numero,b=27;

   cout<<"ingrese un numero: ";
   do{
      cin>>numero;

      if(numero>=-16 and numero<=27 and numero!=0){
         if(numero<b){
            b=numero;
         }
      }


   }while(numero!=00);

   cout<<"El valor minimo en el intervalo fue: "<<b;

   return 0;

};
