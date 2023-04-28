#include <iostream>
using namespace std;



int main()
{

   int cantidad;

   cout<<"Ingresar un valor correspondiente al sueldo: ";
   cin>>cantidad;

   int billetes_100 = cantidad / 100;
       cantidad %= 100;

       int billetes_50 = cantidad / 50;
       cantidad %= 50;

       int billetes_20 = cantidad / 20;
       cantidad %= 20;

       int billetes_10 = cantidad / 10;
       cantidad %= 10;

       int billetes_5 = cantidad / 5;
       cantidad %= 5;

       int billetes_2 = cantidad / 2;
       cantidad %= 2;

       int billetes_1 = cantidad;


          cout << "Billetes de 100: " << billetes_100 << endl;
          cout << "Billetes de 50: " << billetes_50 << endl;
          cout << "Billetes de 20: " << billetes_20 << endl;
          cout << "Billetes de 10: " << billetes_10 << endl;
          cout << "Billetes de 5: " << billetes_5 << endl;
          cout << "Billetes de 2: " << billetes_2 << endl;
          cout << "Billetes de 1: " << billetes_1 << endl;


   return 0;

};
