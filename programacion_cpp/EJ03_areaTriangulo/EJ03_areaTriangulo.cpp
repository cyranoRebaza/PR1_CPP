/***
    EJ03: calcular el area de un triangulo

    ------------------------------
    area = (base * altura)/2

    NOTA:
        -si declaro
        float base;
        float altura;
        float area;

        area = (base * altura) / 2;

        - si declaro
        int base;
        int altura;
        float area;

        area = (float)(base * altura) / 2;  // CASTEO: int --> float




*/
#include <iostream>
using namespace std;

int main()
{
    // declaro las variables
    float base;
    float altura;

    float area;

    // pido la base y la altura
    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese la altura: ";
    cin >> altura;

    // calculo el area
    area = (base * altura) / 2;

    // muestro el area 
    cout << "El area del triangulo es: " << area << endl;

    return 0;
}

