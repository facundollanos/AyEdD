#include <iostream>
using namespace std;

int main()
{

   string domicilio,tipoDeVivienda,identidad,sexo,nivelDeEstudios,estadoActual,domicilioConMasIntegrantes;
   int integrantes,edad,integrantesTotales=0,encuestado=0,masculino=0,femenino=0,estudiosIncompletos=0,domicilioConMasHabitantes=100,analfabeta=0,edadSumada=0,contador=1,EdadenCABA=0;

   do{
      cout<<"Cual es su domicilio?";
      cin.ignore();
      getline(cin, domicilio);
      if(domicilio =="0"){
         break;
      }

      cout<<"Cual es su tipo de vivienda?(C para casa o D para departamento";
      cin.ignore();
      getline(cin, tipoDeVivienda);


      cout<<"Cual es la cantidad de integrantes de su domicilio?";
      cin>>integrantes;

      if(integrantes<domicilioConMasHabitantes and tipoDeVivienda =="D"){
         domicilioConMasHabitantes = integrantes;
         domicilioConMasIntegrantes   =  domicilio;
      }

      integrantesTotales = integrantesTotales +integrantes;

      do{
         cout<<"que edad tiene actualmente?";
         cin>>edad;

         edadSumada = edadSumada +edadSumada;

         cout<<"Cual es su  apellido y nombre?";
         cin.ignore();
         getline(cin, identidad);


         cout<<"Cual es su sexo?";
         cin.ignore();
         getline(cin, sexo);



         cout<<"Cual es su nivel de estudios?";
         cin.ignore();
         getline(cin, nivelDeEstudios);


         if(nivelDeEstudios =="P" or nivelDeEstudios=="S" or nivelDeEstudios=="T" or nivelDeEstudios=="U"){
         cout<<"Finalizo sus estudios mencionados?";
         cin.ignore();
         getline(cin, estadoActual);

         if(estadoActual=="I"){
            estudiosIncompletos++;
         }
         }

         if(nivelDeEstudios=="P" and estadoActual=="C"){
            cout<<identidad<<endl;
            cout<<sexo<<endl;
            cout<<nivelDeEstudios<<endl;
            cout<<estadoActual<<endl;
            cout<<"------------------------------------"<<endl;


         }


         if(edad>=10 and nivelDeEstudios =="N"){
            analfabeta++;
         }

         encuestado++;

         if(sexo=="M"){
            masculino++;
         }else if(sexo=="F"){
            femenino++;
         }
         contador++;
      }while(contador<=integrantes);



   }while(integrantes!=0);

   EdadenCABA= edadSumada/integrantesTotales;
   float porcentajeMasculino = (float)(masculino*100)/encuestado;
   float porcentajeFemenino = (float)(femenino*100)/encuestado;
   float porcentajeAnalfabetas = (float)(analfabeta*100)/encuestado;

   cout<<": : : : : : : :: : : : : : : :: : : : : : : :"<<endl;
   cout<<porcentajeMasculino<<endl;
   cout<<porcentajeFemenino<<endl;
   cout<<porcentajeAnalfabetas<<endl;
   cout<<EdadenCABA<<endl;


   return 0;

}
;
