/**
    EJ04: calcular el area y  perimetro de la cincunferencia

    ******************
    - area = pi * r2
    - perimetro = 2 * pi * r

*/
#include <iostream>
using namespace std;

int main()
{
    // declarar variables
    float radio;
    float area;
    float perimetro;
    
    const float PI = 3.14;

    // pido el radio
    cout << "Ingrese el radio: ";
    cin >> radio;

    // calculos
    area = PI * radio * radio;

    perimetro = 2 * PI * radio;

    // muestro area y perimetro
    cout << "El area es: " << area << endl;
    cout << "El perimetro es: " << perimetro << endl;

    return 0;
}


