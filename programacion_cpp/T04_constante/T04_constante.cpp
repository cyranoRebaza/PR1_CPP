

#include <iostream>
using namespace std;

int main()
{
    // declaracion de variables
    float precioSinIva;
    float calculoIva;
    float precioConIva;

    const float IVA = 21;

    // pido el precio sin iva
    cout << "Ingrese el precio si iva: ";
    cin >> precioSinIva;

    // calculos
    calculoIva = precioSinIva * IVA / 100;

    precioConIva = precioSinIva + calculoIva;

    // muestro el precio con iva
    cout << "\n **** RESULTADO **** \n\n";
    cout << "precio sin iva: $ " << precioSinIva << endl;
    cout << "pago iva: $ " << calculoIva << endl;
    cout << "precio con iva: $ " << precioConIva << endl;

    return 0;
}

