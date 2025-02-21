#include <iostream>
using namespace std;

void ejercicio1();
void ejercicio2();
void ejercicio3();

int main() {
    int opcion;

    do {
        cout << "\n--- Menu de Ejercicios ---\n";
        cout << "1. Determinar si un numero es positivo, negativo o cero.\n";
        cout << "2. Verificar si un numero es par o impar.\n";
        cout << "3. Mostrar el mayor de tres numeros.\n";
        cout << "0. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ejercicio1();
            break;
            case 2:
                ejercicio2();
            break;
            case 3:
                ejercicio3();
            break;
            case 0:
                cout << "Saliendo del programa.\n";
            break;
            default:
                cout << "Opcion no valida. Intente de nuevo.\n";
        }
    } while (opcion != 0);

    return 0;
}

void ejercicio1() {
    int numero;
    cout << "\nIngrese un numero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El numero es positivo.\n";
    } else if (numero < 0) {
        cout << "El numero es negativo.\n";
    } else {
        cout << "El numero es cero.\n";
    }
}

void ejercicio2() {
    int numero;
    cout << "\nIngrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El numero es par.\n";
    } else {
        cout << "El numero es impar.\n";
    }
}
void ejercicio3() {
    int num1, num2, num3;
    cout << "\nIngrese tres numeros separados por espacio: ";
    cin >> num1 >> num2 >> num3;

    int mayor = num1;
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }

    cout << "El mayor de los tres numeros es: " << mayor << "\n";
}