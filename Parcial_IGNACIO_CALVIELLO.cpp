#include <iostream>
using namespace std;

/// inicio la variable a�o
/// luego realizo un if para saber si cumple con los requisitos de que el resto de la division de 0
/// se muestran si el a�o es bisiesto o no


int main()
{
    int anio;

    cout << "ingrese el a�o "<<endl;
    cin >> anio;

    if((anio % 4 == 0 && anio % 100 !=0) || anio % 400 == 0)
    {
        cout << anio <<" el a�o es bisiesto "<< endl;
    }
    else
    {
        cout << anio <<" el a�o no es bisiesto " <<endl;
    }

    return 0;
}


