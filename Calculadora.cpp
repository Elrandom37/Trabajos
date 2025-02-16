#include <iostream>
using namespace std;

float suma(float a, float b) { return a + b; }
float resta(float a, float b) { return a - b; }
float multiplicacion(float a, float b) { return a * b; }
float division(float a, float b) { return (b != 0) ? a / b : 0; }
float porcentaje(float a, float b) { return (a * b) / 100; }

int main() {
    char operacion;
    float num1, num2;

    cout << "Ingrese la operación (+, -, *, /, %): ";
    cin >> operacion;

    cout << "Ingrese dos números: ";
    cin >> num1 >> num2;

    switch (operacion) {
        case '+':
            cout << "Resultado: " << suma(num1, num2) << endl;
            break;
        case '-':
            cout << "Resultado: " << resta(num1, num2) << endl;
            break;
        case '*':
            cout << "Resultado: " << multiplicacion(num1, num2) << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Resultado: " << division(num1, num2) << endl;
            else
                cout << "Error: División por cero." << endl;
            break;
        case '%':
            cout << "Resultado: " << porcentaje(num1, num2) << endl;
            break;
        default:
            cout << "Operación no válida." << endl;
    }

    return 0;
}
    