#include <iostream>

using namespace std;

/// inicio la variable numero
/// hago un for para hacer la estructura repetitiva para la multiplicacion a la inversa
/// dentro de for hago un cout y hago la multiplicacion

int main()
{
    int numero;
    cout << " ingrese un numero " <<endl;
    cin >> numero;

    for(int i = 10; i >= 0; i--)
    {
        cout << numero << " * " << i << " = " << i*numero <<endl;
    }



    return 0;
}




