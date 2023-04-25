#include <iostream>
using namespace std;

int main()
{

   int positivos = 0,negativos = 0,cargados =-1,numero=0,pares = 0;
   float porcentajenegativos,promediopositivos,porcentajepares;

   cout<<"Ingresa numeros: ";
   do
   {

      if( numero>=1 )
      {
         positivos++;
         if( numero%2==0 )
         {
            pares++;
         }
      }
      else
         if( numero<-1 )
         {
            negativos++;
            if( numero%2==0 )
            {
               pares++;
            }
         }

      cargados++;
      cin>>numero;

   }
   while( numero!=0000 );

   cout<<"Los positivos que se cargaron fueron: "<<positivos<<endl;
   cout<<"Los negativos que se cargaron fueron: "<<negativos<<endl;
   cout<<"Los pares que se cargaron fueron: "<<pares<<endl;
   cout<<"Los numeros totales cargados son: "<<cargados<<endl;



   porcentajepares = (float)(pares*100)/cargados;
   promediopositivos = (float)(positivos*100)/cargados;
   porcentajenegativos = (float)(negativos*100)/cargados;

   cout<<"porcentaje de pares: %"<<porcentajepares<<endl;
   cout<<"promedio de positivos: "<<promediopositivos<<endl;
   cout<<"porcentaje de negativos: %"<<porcentajenegativos<<endl;

   return 0;

}
;
