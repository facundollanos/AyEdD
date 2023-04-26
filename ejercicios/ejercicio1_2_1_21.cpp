#include <iostream>
using namespace std;

int main()
{

   int mayor100 = 0,cargados =1,numero=0;
   int b=0,d=0;
   cout<<"Ingresa numeros: ";
   do
   {
      cin>>numero;
      if( numero>=100 )
      {
         mayor100++;

         b=b+numero;

      }
      else if(numero<=-10){

         d=d+numero;

      }
      cargados++;


   }
   while(cargados<=100);

 //  cout<<mayor100<<endl;
   float ce=(float)(b/mayor100);
cout<<"Promedio de mayores a 100: "<<ce<<endl;
cout<<"Numeros menores a -10: "<<d<<endl;

   return 0;

}
;
