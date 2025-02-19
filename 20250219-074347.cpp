#include <iostream>
using namespace std;

int main() {
    double precioOriginal;
    double descuento = 0.15; 

    cout << "Ingrese el precio del artículo: ";
    cin >> precioOriginal;

    double precioFinal = precioOriginal * (1 - descuento);
    cout << "El precio final después del descuento es: " << precioFinal << endl;

    return 0;
}
