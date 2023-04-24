#include <iostream>
using namespace std;

int factorializador(int a){
   int i=1;
   int producto = 1;
      while(a>i){

         producto*=a;
         a--;
      }
      return producto;
}


int main(){

   int factorial;
   cout<<"Cuantos numeros desearias visualizar?: ";
   cin>> factorial;
   int i=1;
   int b =1;
   do{

      cout<<factorializador(b)<<"//";
      b++;
      i++;
   }while(i<=factorial);


   return 0;

};
