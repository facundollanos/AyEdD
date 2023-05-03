#include <iostream>
using namespace std;

int main()
{

   int numeroDeVuelo,cantDePasajeros,pasaporte,costodePasaje,costoTotaldelVuelo=0;
   int pasajero=0,asientosLibres=0,asientosOcupados=0,vueloCompleto=0,vueloMasRecaudado=0;
   string destino;
   int vuelo;
   int i =0;

   do
   {
      cout<<"Cuantos vuelos hubo este mes?";
      cin>>vuelo;
      do
      {

         cout<<"Indicar por favor numero de vuelo";
         cin>>numeroDeVuelo;

         if(numeroDeVuelo ==0){
            break;
         };

         cout<<"Indicar por favor destino del vuelo";
         cin.ignore();
         getline(cin, destino);


         cout<<"Indicar por favor cantidad de asientos";
         cin>>cantDePasajeros;


         cout<<"Nro de vuelo: "<<numeroDeVuelo<<", Destino: " <<destino;


         do
         {
            cout<<"Indicar por favor su pasaporte";
            cin>>pasaporte;

            if(pasaporte ==0){
               break;
            };

            cout<<"Indicar por favor el valor del monto del pasaje";
            cin>>costodePasaje;


            cout<<"Número de pasaporte                 Importe"<<endl;;

            cout<<pasaporte<<"                 "<<costodePasaje<<endl;


            costoTotaldelVuelo = costoTotaldelVuelo + costodePasaje;
            pasajero++;
         }
         while(pasaporte !=0);

         asientosLibres = (float)((cantDePasajeros - pasajero)*100)/cantDePasajeros;
         asientosOcupados = (float)(pasajero*100)/cantDePasajeros;

         cout<<":     : :                :";
         cout<<"Total recaudación vuelo: "<<costoTotaldelVuelo<<endl;
         cout<<"Porcentaje de asientos libres: "<<asientosLibres<<endl;
         cout<<"Porcentaje de asientos ocupados: "<<asientosOcupados<<endl;

         if(pasajero==cantDePasajeros){
            vueloCompleto++;
         }

         if(costoTotaldelVuelo>vueloMasRecaudado){
            vueloMasRecaudado = costoTotaldelVuelo;
         }

         i++;

      }
      while(numeroDeVuelo !=0);

   }
   while(i<vuelo);

   cout<<"Mayor cantidad de veces seguidas que se dieron vuelos completos: "<<vueloCompleto<<endl;
   cout<<"Número de vuelo que más recaudó: "<<vueloMasRecaudado;

   return 0;
}
