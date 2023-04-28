#include <iostream>
using namespace std;

int sacarEdad(int d){
   int anio1 = -((d/10000)-2023);
   return anio1;
}

int main()
{
   string nombre,SujetoMasViejo="",SujetoMasJoven="";
   int edad,edadMasJoven=0,EdadMasViejo=999999999;


   do{
      cout<<"ingrese el nombre: ";
      cin>>nombre;

      cout<<"ingrese la edad en formato AAAAMMDD: ";
      cin>>edad;




      if(edad>edadMasJoven and edad>2){
         SujetoMasJoven = nombre;
         edadMasJoven = edad;

      }else if(edad<EdadMasViejo and edad>2){
         SujetoMasViejo = nombre;
         EdadMasViejo = edad;

      }

   }while(nombre !="salir" and edad!=0);


cout<<"El sujeto mas joven fue: "<<SujetoMasJoven<<" con "<<sacarEdad(edadMasJoven)<<" anios"<<endl;
cout<<"El sujeto mas viejo fue: "<<SujetoMasViejo<<" con "<<sacarEdad(EdadMasViejo)<<" anios"<<endl;


   return 0;

};
