#include <iostream>
using namespace std;


int main(){

   int producto=1;
   int numero;

   cout<<"Ingrese el numero para la productorial: ";
   cin>>numero;


   int i=1;
   while(numero>i){

      producto*=numero;
      numero--;

}
   cout<<"El factorial es: "<<producto;

   return 0;

};
