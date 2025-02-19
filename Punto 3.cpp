#include <iostream>
using namespace std;

int manipularVariable(int valor) {
    valor += 5;  
    valor -= 3;  
    valor *= 2;  
    valor /= 4;  
    return valor;
}

int main() {
    int variable;
    cout << "Ingrese un valor inicial: ";
    cin >> variable;

    int resultado = manipularVariable(variable);
    cout << "El resultado final es: " << resultado << endl;
    return 0;
}
