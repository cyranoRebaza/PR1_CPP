
#include <iostream>
using namespace std;

int main()
{      
    // division exacta de numeros enteros
    int division = 10 / 5; //2

    // division inexacta de nuemeros enteros
    int division2 = 10 / 3; // 3
    int resto = 10 % 3;     // 1

    // division de numeros reales ( se trunca)
    float division3 = (float)10 / 3; // 3.3

    float division4 = 10.0F / 3; // 3.333

    cout << "division dos enteros 10 / 5 es: " << division << endl;
    cout << "division 10 /3 es: " << division2 << " y el resto es: " << resto << endl;
    cout << "division reales: " << division3 << endl;
    cout << "division reales: " << division4 << endl;
    


    return 0;
}

