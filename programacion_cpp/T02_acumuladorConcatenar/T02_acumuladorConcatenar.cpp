/**
    OPERADOR +:
        - usa como operador aritmetico: 5 + 6 = 10
        - como concatenador de string: "hola" + "pepe"




*/


#include <iostream>
using namespace std;

int main()
{
    // declaracion e inicializacion
    int numero = 10; // reservo espacio de memoria y guardo el valor 10

    // expresion binaria de asignacion
    numero = numero + 5;  // numero += 5

    numero += 1;
    numero++;

    // muestro el valor de numero
    cout << "El valor de numero es: " << numero << endl;
    cout << endl;

    cout << "********************************" << endl;

    string texto;
    string entrada1;
    string entrada2;

    cout << "Ingrese una palabra: ";
    cin >> entrada1;

    cout << "Ingrese otra palabra: ";
    cin >> entrada2;

    texto = entrada1 + " " + entrada2;

    cout << texto << endl;





    return 0;
}


