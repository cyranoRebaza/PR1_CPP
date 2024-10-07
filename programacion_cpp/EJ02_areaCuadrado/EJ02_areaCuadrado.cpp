/**
    EJ02: calcular el area y perimetro de un cuadrado

    --------------------------------
    _ area = lado * lado
    - perimetro = 4 * lado


    */

#include <iostream>
using namespace std;

int main()
{
    // declaro las variables
    int lado;
    int area;
    int perimetro;

    // pido el lado del cuadrado
    cout << "Ingrese el lado: ";
    cin >> lado;

    // calculo el area y el perimetro del cuadrado
    area = lado * lado;
    perimetro = 4 * lado;

    // muestro
    cout << "El area de cuadrado es: " << area << endl;
    cout << "El perimetro del cuadrado es: " << perimetro << endl;


    return 0;
}


