#include <iostream>
using namespace std;


int main(){

   int a,b,c;
   cout<<"Ingrese el lado a: ";
   cin>>a;

   cout<<"Ingrese el lado b: ";
   cin>>b;

   cout<<"Ingrese el lado c: ";
   cin>>c;



   if(a==b and a==c and b==c){
      cout<<" Es triangulo Equilatero ";
   }else if(a==b){
      cout<<" Es triangulo  isosceles";
   }else if(a==c){
      cout<<" Es triangulo  isosceles ";
   }else{
      cout<<"Es triangulo Escaleno porque posee 3 lados distintos";
      };





   return 0;

};
