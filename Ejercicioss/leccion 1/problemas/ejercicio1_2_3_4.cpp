#include <iostream>
using namespace std;

int main()
{

   int tInfr,valor,cantidadMultas,multaMenor = 9999999;
   int infr1 = 0,infr2 = 0,infr3 = 0,infr4 = 0;
   int gravedadL = 0,gravedadM = 0,gravedadG = 0,gravedad;
   string motivo,motivoMenor;
   int totalaPagar = 0;
   do
   {

      cout<<"Cual fue el tipo de la infraccion?";
      cin>>tInfr;

      switch(tInfr)
      {
      case 1:
         infr1++;
         break;
      case 2:
         infr2++;
         break;
      case 3:
         infr3++;
         break;
      case 4:
         infr4++;
         break;

      };

      cout<<"Motivo de la infraccion?";
      cin.ignore();
      getline(cin, motivo);



      cout<<"Cual es el valor de la multa por la infraccion?";
      cin>>valor;
      totalaPagar = totalaPagar+valor;

      if( valor<multaMenor )
            {
               multaMenor = valor;
               motivoMenor = motivo;
            }

      cout<<"Cual es la gravedad de la infraccion?";
      cin>>gravedad;

      switch(gravedad)
      {
      case 1:
         gravedadL++;
         break;
      case 2:
         gravedadM++;
         break;
      case 3:
         gravedadG++;
         break;
      };

      cantidadMultas++;
      cout<<"----------------------"<<endl;

   }
   while( tInfr!=0 );

   cout<<endl<<endl<<"---------------"<<endl;

   cout<<"Total a pagar: "<<totalaPagar<<endl;

   cout<<"Visto que posee: "<<endl;
   cout<<"----------------------"<<endl;
   cout<<gravedadL<<" Infracciones de tipo L/ "<<endl;
   cout<<"----------------------"<<endl;

   cout<<gravedadM<<" Infracciones de tipo M /"<<endl;
   cout<<"----------------------"<<endl;

   cout<<gravedadG<<" Infracciones de tipo G/"<<endl;
   cout<<"----------------------"<<endl;

   cout<<"El motivo por la infraccion de menor valor fue: "<<motivoMenor<<endl;

   if( gravedadG>3 )
   {
      cout<<"Clausurar fabrica"<<endl;
   }


  /*
   int tInfr;
       string motivo, motivoMenorValor;
       double valor, totalPagoL = 0, totalPagoM = 0, totalPagoG = 0, valorMenor = 999999;
       int cantG = 0, cantInfr = 0;

       do {
           cout << "Tipo de Infraccion (0 para salir): ";
           cin >> tInfr;

           if (tInfr != 0) {
               cout << "Motivo: ";
               cin.ignore();
               getline(cin, motivo);

               cout << "Valor: ";
               cin >> valor;

               cout << "Gravedad (L, M, G): ";
               char gravedad;
               cin >> gravedad;

               if (gravedad == 'L') {
                   totalPagoL += valor;
               } else if (gravedad == 'M') {
                   totalPagoM += valor;
               } else if (gravedad == 'G') {
                   totalPagoG += valor;
                   cantG++;
               }

               if (valor < valorMenor) {
                   valorMenor = valor;
                   motivoMenorValor = motivo;
               }

               cantInfr++;
           }

       } while (tInfr != 0);

       cout << "Total a pagar:" << endl;
       cout << "Gravedad L: " << totalPagoL << endl;
       cout << "Gravedad M: " << totalPagoM << endl;
       cout << "Gravedad G: " << totalPagoG << endl;

       if (cantG > 3) {
           cout << "Clausurar Fabrica" << endl;
       }

       cout << "Motivo infraccion de menor valor: " << motivoMenorValor << endl;
*/

   return 0;

}
;
