#include <iostream>
using namespace std;

/// inicio la variable año
/// luego realizo un if para saber si cumple con los requisitos de que el resto de la division de 0
/// se muestran si el año es bisiesto o no


int main()
{
    int anio;

    cout << "ingrese el año "<<endl;
    cin >> anio;

    if((anio % 4 == 0 && anio % 100 !=0) || anio % 400 == 0)
    {
        cout << anio <<" el año es bisiesto "<< endl;
    }
    else
    {
        cout << anio <<" el año no es bisiesto " <<endl;
    }

    return 0;
}


