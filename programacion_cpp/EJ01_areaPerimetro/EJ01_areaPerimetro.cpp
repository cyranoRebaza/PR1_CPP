
/**
    EJ01: calcular el area y perimetro de un rectangulo

    --------------------------------
    _ area = largo * ancho
    - perimetro = 2 * largo + 2 * ancho
    
    
    */

#include <iostream>
using namespace std;

int main()
{
    // declaro las variables
    int largo;
    int ancho;

    int area;
    int perimetro;

    // pido el largo y el ancho
    cout << "Ingrese el largo: ";
    cin >> largo;

    cout << "Ingrese el ancho: ";
    cin >> ancho;

    // calculo el area y perimetro
    area = largo * ancho;

    perimetro = 2 * (largo + ancho);

    // muestro
    cout << "El perimetro es: " << perimetro << endl;
    cout << "El area es: " << area << endl;


    return 0;
}


