#include <iostream>
using namespace std;


int main(){

   int f1,f2,factual=20230418;


   int anioactual = factual/10000;
   int mesactual = (factual/100)%100;
   int diaactual = factual%100;



   cout<<"Ingrese una fecha en formato aaaammdd: ";
   cin>>f1;

   cout<<"Ingrese otra fecha en formato aaaammdd: ";
   cin>>f2;


   int anio1 = f1/10000;
   int mes1 = (f1/100)%100;
   int dia1 = f1%100;

   int anio2 = f2/10000;
   int mes2 = (f2/100)%100;
   int dia2 = f2%100;


   if((anioactual-anio1)<(anioactual-anio2)){
      cout<<"La fecha mas cercana es: "<<f1;
   } else if((anioactual-anio1)<(anioactual-anio2)){
      cout<<"La fecha mas cercana es: "<<f2;

   }else if(anio1==anio2 and(mesactual-mes1)<(mesactual-mes2)){
      cout<<"La fecha mas cercana es: "<<f1;

   }else if(anio1==anio2 and (mesactual-mes1)>(mesactual-mes2)){
      cout<<"La fecha mas cercana es: "<<f2;

   }else if(anio1==anio2 and (mes2==mes1) and (diaactual-dia1)<(diaactual-dia2)){
      cout<<"La fecha mas cercana es: "<<f1;

   }else if(anio1==anio2 and (mes2==mes1) and (diaactual-dia1)>(diaactual-dia2)){
      cout<<"La fecha mas cercana es: "<<f2;
   }else{
      cout<<"Las fechas son iguales";
   }


   return 0;

};
