#include <iostream>

using namespace std;

/// inicio las variable
/// le pregunto al usuario el numero que desae agregar(que sea mayor o igual a 15)
/// hago una esrtuctura repetitiva para imprimir los numeros
/// dentro de la estructura hacer



int main()
{

    int numero;

    cout << " ingrese un numero (mayor a 15) " <<endl;
    cin >> numero;

    for(int i = 1; i > 0; i--)
    {
        if(i % == 3)
        {
            cout << " Fizz " << endl;
        }
        else if(i % == 5)
        {
            cout << " Buzz " << endl;
        }
        else if(i % == 3 && i % == 5)
        {
            cout << " FizzBuzz " <<endl;
        }
    }


    return 0;
}
