#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

// Declaración de funciones
double realizarOperacion(double num1, double num2, char operacion);
void imprimirResultado(double resultado);

int main() {
    // Variables
    int cantidadOperaciones;
    double num1, num2, resultado;
    char operacion;

    // Inicio del programa
    cout << "_______________________________________________\n";
    cout << "  Programa de Operaciones Matematicas\n";
    cout << "_______________________________________________\n";

    // Solicitar la cantidad de operaciones
    cout << "---------------------------------------------------\n";
    cout << "Ingrese la cantidad de operaciones a realizar: ";
    cin >> cantidadOperaciones;
    cout << "---------------------------------------------------\n";

	
    // Bucle para realizar operaciones
    for (int i = 0; i < cantidadOperaciones; ++i) {
        // Solicitar datos al usuario
        cout << "_______________________________________________\n";
        cout << "\nOperacion " << i + 1 << ":\n";
        cout << "Ingrese la operacion (+, -, *, /, %): ";
        cin >> operacion;
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        cout << "________________________________________________\n";
        // Realizar operación
        resultado = realizarOperacion(num1, num2, operacion);

        // Imprimir resultado
        imprimirResultado(resultado);
    }

    // Fin del programa
    cout << "--------------------------------------\n";
    cout << "\nEl programa se ha terminado.\n";
    cout << "--------------------------------------\n";

    return 0;
}

// Implementación de funciones

double realizarOperacion(double num1, double num2, char operacion) {
    switch (operacion) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                cout << "Error: No se puede dividir por cero.\n";
                return 0.0;
            }
        case '%':
            if (num2 != 0) {
                return fmod(num1, num2);
            } else {
                cout << "Error: No se puede realizar el modulo por cero.\n";
                return 0.0;
            }
        default:
            cout << "Error: Operacion no valida.\n";
            return 0.0;
    }
}

void imprimirResultado(double resultado) {
	cout << "*********************************************\n";
    cout << "El resultado es: " << resultado << "\n";
    cout << "*********************************************\n";
}

