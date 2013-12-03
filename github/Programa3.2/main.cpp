#include <iostream>
/*
tenemos un arreglo de 4 lineas y 4 columnas.
pero solo vamos a ingresar valores en las tres primeras columnas
y la ultima la dejamos reservada para la suma de  cada una de las lineas
*/
using namespace std;


const int lin=4;
const int col=4;
int num[lin][col];

void ingreso (int num [lin][col])
{
    for(int l=0; l<lin; l++)
    {
        for (int c=0; c<col-1; c++)
        {
            cout<<"ingreso dato ["<<l<<","<<c<<"]..";
            cin>>num[l][c];
        }
    }
}

void sumarlineas(int num[lin][col])
{
    for(int l=0; l<lin; l++)
    {num [l][col-1]=0;
        for (int c=0; c<col-1; c++)
        {
            num[l][col-1]+=num[l][c]/2;
        }
    }
}

void presentar (int num [lin][col])
{
    for(int l=0; l<lin; l++)
    {
        for (int c=0; c<col; c++)
        {
            cout<<num[l][c]<<"|";
        }
        cout<<"\n";
    }
}


int main()
{
    ingreso(num);
    sumarlineas(num);
    presentar(num);


    return 0;
}
