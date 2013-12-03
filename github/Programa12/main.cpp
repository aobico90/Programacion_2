#include <iostream>

using namespace std;
/*
ingresar 5 numeros y presentar el promedio de los pares y de impares
Al final presentar el numero mayor
*/
int main()
{int contador, numero, cpar, cimpar, mayor, menor;
int sumap, sumai;
contador=0;
mayor=0;
sumap=0;
sumai=0;
cimpar=0;
cpar=0;
menor=numero;
double promimpares,prompares;



    while(contador<5)
    {
    cout << "Ingresar numero >";
    cin>>numero;

    if ((numero % 2)==0)
    {
        sumap+=numero; //sumap=sumap+numero
        cpar++;
    }
    else
    {
        sumai+=numero;
        cimpar++;
    }
    contador++;

    if (numero>mayor)
    {
        mayor=numero;
    }

    if (numero<menor)
    {
        menor=numero;
    }


    }// Fin de ciclo

    cout<<"numero mayor es..."<<mayor<<"\n";

    cout<<"numero menor es..."<<menor<<"\n";

    if (sumap!=0)
    {
        prompares=sumap/cpar;
    }
        else
        {
            prompares=0;
        }

    if (sumai!=0)
    {
        promimpares=sumai/cimpar;
    }
        else
        {
            promimpares=0;
        }

       cout<<"promedio de los pares..."<<prompares<<"\n";
       cout<<"promedio de los impares..."<<promimpares<<"\n";

    return 0;
}
