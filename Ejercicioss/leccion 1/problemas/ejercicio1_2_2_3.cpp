#include <iostream>
using namespace std;



int main()
{

       int NUM_CONTENEDORES = 100;
       int idCont, peso, idPuerto;
       int pesoTotal = 0;
       int maxPeso = 0;
       int contPuerto1 = 0, contPuerto2 = 0, contPuerto3 = 0;

       // Lectura de datos de los contenedores
       for (int i = 0; i < NUM_CONTENEDORES; i++) {
           cout << "Ingrese los datos del contenedor " << i + 1 << ":" << endl;
           cout << "Identificacion: ";
           cin >> idCont;
           cout << "Peso en kilos: ";
           cin >> peso;
           pesoTotal += peso;
           if (peso > maxPeso) {
               maxPeso = peso;
           }
           cout << "Puerto de destino (1, 2 o 3): ";
           cin >> idPuerto;
           switch (idPuerto) {
               case 1:
                   contPuerto1++;
                   break;
               case 2:
                   contPuerto2++;
                   break;
               case 3:
                   contPuerto3++;
                   break;
               default:
                   cout << "Puerto invalido" << endl;
                   break;
           }
       }

       // Impresion de resultados
       cout << "El peso total que el buque debe trasladar es: " << pesoTotal << " kg" << endl;
       cout << "El contenedor de mayor peso tiene: " << maxPeso << " kg" << endl;
       cout << "Se trasladaran " << contPuerto1 << " contenedores al puerto 1" << endl;
       cout << "Se trasladaran " << contPuerto2 << " contenedores al puerto 2" << endl;
       cout << "Se trasladaran " << contPuerto3 << " contenedores al puerto 3" << endl;


   return 0;

};
