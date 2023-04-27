#include <iostream>
using namespace std;

int main()
{

   int numero,multiploSi,multiploNo,i=0,x=1;

   cout<<"Cantidad de multiplos deseados: ";
   cin>>numero;

   cout<<"numero multiplo: ";
   cin>>multiploSi;

   cout<<"multiplo a evitar: ";
   cin>>multiploNo;


   do
   {

      if(x%multiploSi==0 and x%multiploNo!=0){
        cout<<x<<"//"<<endl;
         i++;

      }

   x++;
   }
   while(i<numero);

   return 0;

}
;
