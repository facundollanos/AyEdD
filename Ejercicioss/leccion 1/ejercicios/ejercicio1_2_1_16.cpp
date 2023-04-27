#include <iostream>
using namespace std;




int main(){

   int n,f,f1=0,f2=1;
   cout<<"Numeros de la serie a mostrar: ";
   cin>>n;




   while(n>0)
   {

      f=f1+f2;
      f1=f2;
      f2=f;




         cout<<f<<"\\";

         n--;
      }




   return 0;

};
