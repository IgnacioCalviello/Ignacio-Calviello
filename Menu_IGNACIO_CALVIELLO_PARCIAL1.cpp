#include<iostream>
using namespace std;



void anioBisiesto()
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


}
void tablaInversa()
{
    int numero;
    cout << " ingrese un numero " <<endl;
    cin >> numero;

    for(int i = 10; i > 0; i--)
    {
        cout << numero << " * " << i << " = " << i * numero <<endl;
    }
}

void fizzBuzz()
{
    int numero;

    cout << " ingrese un numero (mayor a 15) " <<endl;
    cin >> numero;

    for(int i = 0; i <= numero; i++)
    {
        if(i % 3 == 0)
        {
            cout << " Fizz " << endl;
        }
        else if(i % 5 == 0)
        {
            cout << " Buzz " << endl;
        }
        else if(i % 3 == 0 && i % 5 == 0)
        {
            cout << " FizzBuzz " <<endl;
        }else{
            cout << i << endl;
        }
    }


}






int main()
{

int opcion;

do{

    cout << "        MENU     "  <<endl;
    cout << "  1. anioBisiesto " << endl;
    cout << "  2. tablaInversa " << endl;
    cout << "  3. FizzBuzz "     << endl;
    cout << "  4. salir "        << endl;
    cout << "  ingresar opcion " << endl;
    cin >> opcion;


    switch(opcion)
    {
    case 1:
        anioBisiesto();
        break;
    case 2:
         tablaInversa();
        break;
    case 3:
        fizzBuzz();
    }


}while(opcion!=4);




    return 0;
}
