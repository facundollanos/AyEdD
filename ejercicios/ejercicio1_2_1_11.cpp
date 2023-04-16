#include <iostream>
using namespace std;


int main(){


   int mes;
   int anio;

   cout<<"Ingresar mes: ";
   cin>>mes;
   cout<<"Ingresar anio: ";
   cin>>anio;


   switch(mes)
   {
   case 1: cout <<"Enero";
   break;
   case 2: if(anio%4==0 and anio%100!=0){
      cout<<"Es febrero en anio bisiesto";
   }else if(anio%400==0)
   {cout<<"Es febrero en anio bisiesto";
   }else{cout<<"Es febrero en anio no bisiesto";}
   break;
   case 3: cout<<"Marzo";
   break;
   case 4: cout <<"Abril";
   break;
   case 5: cout <<"Mayo";
   break;
   case 6: cout <<"Junio";
   break;
   case 7: cout <<"Julio";
   break;
   case 8: cout <<"Agosto";
   break;
   case 9: cout <<"Septiembre";
   break;
   case 10: cout <<"Octubre";
   break;
   case 11: cout <<"Noviembre";
   break;
   case 12: cout <<"Diciembre";
   break;
   default: cout<<"colocaste un valor incorrecto";
   break;

   }



   return 0;

};
