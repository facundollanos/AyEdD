#include <iostream>
using namespace std;




int main(){


   int multiplo;
   cout<<"Cuantos numeros le gustaria obtener?: ";
   cin>>multiplo;
   int numero = 0;
   int i =0;
   do{




      if(numero%5==0 and numero%3!=0){
         cout<<numero<<"/";
         i++;
      }

      numero++;
   }
   while(i<multiplo);

   return 0;

};
