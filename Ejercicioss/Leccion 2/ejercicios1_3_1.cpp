#include <iostream>
#include <ctime>

using namespace std;


double factorial(int n){
   int i=1;
      int producto = 1;
         while(n>i){

            producto*=n;
            n--;
         }
         return producto;

}

bool esPrimo(int n){
   int i=1;
   int primo=0;
   do{
      if(n%i==0){
         primo++;
      }
      i++;
   }while(i<=n);

   if(primo<=2){
      return true;
   }else{
      return false;
   }
}

bool fechaEsAnioBisiesto(int anio){
   if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)) {
           return true;
       } else {
           return false;
       }
   }


string fechaUnificar(string anio,string mes,string dia){
   string fechaunificada = anio+mes+dia;
   return fechaunificada;

}

struct Fecha {
    int anio;
    int mes;
    int dia;
};

Fecha fechaDividir(int f) {
    Fecha resultado;
    resultado.anio = f / 10000;
    resultado.mes = (f / 100) % 100;
    resultado.dia = f % 100;
    return resultado;
}

string today(){
   time_t tiempo_actual = time(NULL);
   struct tm *fecha = localtime(&tiempo_actual);
   char fecha_str[9];
   strftime(fecha_str, sizeof(fecha_str), "%Y%m%d", fecha);
   return fecha_str;
}

int main()
{
   cout<<esPrimo(7)<<endl;


   return 0;

};
