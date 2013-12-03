#include <iostream>
/*ingresar un numero si es negativo, positivo o cero*/


using namespace std;

int main()

{int numero;
    cout << "Ingresar numero...:";
    cin >> numero;

    if (numero>0)
    {
        cout <<"Positivo"<<"\n";
    }

    else if (numero<0)
    {
        cout <<"Negativo"<<"\n";
    }
    else
    {
        cout <<"Cero"<<"\n";
    }
    return 0;
}
