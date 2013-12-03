#include <iostream>

using namespace std;
/*
Ingresar 5 numeros y contar cuantos son
positivos, negativos y ceros*/

int main()
{ int numero,cpositivo,cnegativo,cceros,contador;
      cpositivo=0; cnegativo=0; cceros=0;
      contador=0;
      while(contador<5)
      {
          cout<<"ingresar un numero";
          cin>>numero;

          contador++;

        if (numero>0)
        {
            cpositivo++;
        }
        else if (numero<0)
        {
            cnegativo++;
        }

        else
        {
            cceros++;
        }
      contador++;
      }

      cout<<"contador de positivos...:"<<cpositivo<<"\n";
      cout<<"contador de negativos...:"<<cnegativo<<"\n";
      cout<<"contador de ceros...:"<<cceros<<"\n";

    return 0;
}
