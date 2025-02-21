#include <iostream>
using namespace std;

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();

int main() {
    int opcion;

    do {
        cout << "\n--- Menu de Ejercicios ---\n";
        cout << "1. Determinar si un numero es positivo, negativo o cero.\n";
        cout << "2. Verificar si un numero es par o impar.\n";
        cout << "3. Mostrar el mayor de tres numeros.\n";
        cout << "4. Determinar si un anio es bisiesto.\n";
        cout << "5. Determinar si una letra es vocal o consonante.\n";
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
            case 4:
                ejercicio4();
            break;
            case 5:
                ejercicio5();
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

void ejercicio4() {
    int anio;
    cout << "\nIngrese un anio: ";
    cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << "El anio " << anio << " es bisiesto.\n";
    } else {
        cout << "El anio " << anio << " no es bisiesto.\n";
    }
}

void ejercicio5() {
    char letra;
    cout << "\nIngrese una letra: ";
    cin >> letra;

    letra = tolower(letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "La letra es una vocal.\n";
    } else if (isalpha(letra)) {
        cout << "La letra es una consonante.\n";
    } else {
        cout << "No ingresó una letra válida.\n";
    }
}