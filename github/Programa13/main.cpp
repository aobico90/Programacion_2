#include <iostream>

using namespace std;
/*
Ingresar 5 numero y determinar cuantos son divisibles
entre 3
*/
int main()
{int numero, cdiv3, suma, prom;
 cdiv3=0;
 suma=0;

 for(int i=0;i<5;i++)
 {
     cout<<"Ingresar un numero entero...";
     cin>>numero;
     if ((numero% 3)==0)
     {
         cdiv3++;
         suma+= numero;
     }
 }
 if (cdiv3>0)
{
    prom=suma/cdiv3;
}
else
{
    prom=0;
}


cout<<"Promedio de numeros divisibles en 3 es..."<<prom<<"\n";
cout<<"Contador de divisibles entre 3 es:"<<cdiv3<<"\n";
    return 0;
}
