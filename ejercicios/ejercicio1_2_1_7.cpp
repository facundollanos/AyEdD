#include <iostream>
using namespace std;


int main(){

   int a,b,c;
   cout<<"Ingrese el primer numero: ";
   cin>>a;

   cout<<"Ingrese el segundo numero: ";
   cin>>b;

   cout<<"Ingrese el tercer numero: ";
   cin>>c;



   if(a>b and a>c and b>c){
      cout<<" El primer valor es el mayor, el segundo es el del medio y el tercero es el ultimo ";
   }else if(a>b and a>c and c>b){
      cout<<" El primer valor es el mayor, el tercero es el del medio y el segundo es el ultimo ";
   }else if(b>a and b>c and a>c){
      cout<<" El segundo valor es el mayor, el primero es el del medio y el tercero es el ultimo ";
   }else if(b>a and b>c and a>c){
         cout<<" El segundo valor es el mayor, el primero es el del medio y el tercero es el ultimo ";
   }else if(b>a and b>c and c>a){
      cout<<" El segundo valor es el mayor, el tercero es el del medio y el primero es el ultimo ";
   }else if(c>a and c>b and a>b){
      cout<<"El tercer valor es el mayor, el primero es el del medio y el segundo es el ultimo  ";
   }else{
      cout<<"El tercer valor es el mayor, el segundo es el del medio y el primero es el ultimo ";
      };





   return 0;

};
