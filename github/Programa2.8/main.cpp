#include <iostream>

using namespace std;
const int tam=4;
int num[tam];
int mayor, menor, promedio, cpar, cimpar;

void ingreso(int num[])
{
    for(int i=0; i<=tam; i++)
    {
        cout<<"Ingresar un numero["<<i<<"]...:";
        cin>>num[i];
    }
}
int promedioArreglo(int num[])
{ int suma=0;

    for (int i=0; i<tam; i++)
    {
        suma+=num[i];
    }
    return suma/tam;

}


int mayorNumero(int num[])
{ int maxi=num[0];

    for (int i=0; i<=tam; i++)
    {
        if (num[i]>maxi)
        {
            maxi=num[i];
        }
    }
    return maxi;
}


int menorNumero(int num[])
{ int menorx=num[0];

    for (int i=0; i<=tam; i++)
    {
        if (num[i]<menorx)
        {
            menorx=num[i];
        }
    }
    return menorx;
}

int pares(int num[])
{
    for (int i=0; i<=tam; i++)
    {
        if (num[i]%2==0)
        {
            cpar++;
        }
        else
        {
            cimpar++;
        }
    }
    return cpar;
}







int main()
{
  ingreso(num);
  promedio=promedioArreglo(num);
  mayor=mayorNumero(num);
  menor=menorNumero(num);
  contapar=pares(num);

  cout<<"Promedio del arreglo...:"<<promedio<<"\n";
  cout<<"Numero mayor es........:"<<mayor<<"\n";
  cout<<"Numero menor es........:"<<menor<<"\n";
  cout<<"Numeros pares..........:"<<contapar<<"\n";

    return 0;
}
