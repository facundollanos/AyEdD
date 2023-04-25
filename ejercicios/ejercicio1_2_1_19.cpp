#include <iostream>
using namespace std;




int main(){
   int menos12=0,mayor12=0,mayor24=0,igualacero=0;

     int v;
     cout<<"Asignar valores: ";
   do{

   if(v==0 or v==00 or v==000){
      igualacero++;
   }else if(1<12 and v<12 and v!=0){
      menos12++;
   }else if(13<v and v<=24 and v!=0){
      mayor12++;
   }else if( 25<v and v<=36 and v!=0){
      mayor24++;
   }   cin>>v;


   }while(v!=999);

   cout<<"Menores que 12: "<<menos12<<endl;
   cout<<"mayores que 12: "<<mayor12<<endl;
   cout<<"mayores que 24: "<<mayor24<<endl;
   cout<<"Iguales a 0: "<<igualacero<<endl;


   return 0;

};
