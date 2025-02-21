#include <iostream>
using namespace std;

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();
void ejercicio9();
void ejercicio10();
void ejercicio11();
void ejercicio12();
void ejercicio13();
void ejercicio14();
void ejercicio15();
void ejercicio16();

int main() {
    int opcion;

    do {
        cout << "\n--- Menu de Ejercicios ---\n";
        cout << "1. Determinar si un numero es positivo, negativo o cero.\n";
        cout << "2. Verificar si un numero es par o impar.\n";
        cout << "3. Mostrar el mayor de tres numeros.\n";
        cout << "4. Determinar si un anio es bisiesto.\n";
        cout << "5. Determinar si una letra es vocal o consonante.\n";
        cout << "6. Verificar si un numero es primo.\n";
        cout << "7. Verificar si un anio es un anio de nacimiento valido.\n";
        cout << "8. Determinar si un numero es multiplo de 5 y de 7.\n";
        cout << "9. Determinar la calificacion de un estudiante.\n";
        cout << "10. Calcular el precio despues de un descuento.\n";
        cout << "11. Imprimir los numeros del 1 al 20.\n";
        cout << "12. Imprimir todos los numeros desde 1 hasta un numero ingresado.\n";
        cout << "13. Sumar numeros positivos hasta que se ingrese un numero negativo.\n";
        cout << "14. Generar la secuencia de Fibonacci hasta un numero ingresado.\n";
        cout << "15. Ingresar numeros hasta que la suma sea mayor a 100.\n";
        cout << "16. Imprimir todos los numeros pares hasta un numero ingresado.\n";
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
            case 6:
                ejercicio6();
            break;
            case 7:
                ejercicio7();
            break;
            case 8:
                ejercicio8();
            break;
            case 9:
                ejercicio9();
            break;
            case 10:
                ejercicio10();
            break;
            case 11:
                ejercicio11();
            break;
            case 12:
                ejercicio12();
            break;
            case 13:
                ejercicio13();
            break;
            case 14:
                ejercicio14();
            break;
            case 15:
                ejercicio15();
            break;
            case 16:
                ejercicio16();
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
        cout << "No ingresaste una letra valida.\n";
    }
}

void ejercicio6() {
    int numero;
    cout << "\nIngrese un numero: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "El numero no es primo.\n";
        return;
    }

    bool esPrimo = true;
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            esPrimo = false;
            break;
        }
    }

    if (esPrimo) {
        cout << "El numero es primo.\n";
    } else {
        cout << "El numero no es primo.\n";
    }
}

void ejercicio7() {
    int anio;
    cout << "\nIngrese un anio de nacimiento: ";
    cin >> anio;

    int anioActual = 2025;

    if (anio > 1900 && anio < anioActual) {
        cout << "El anio ingresado es un anio de nacimiento valido.\n";
    } else {
        cout << "El anio ingresado no es valido.\n";
    }
}

void ejercicio8() {
    int numero;
    cout << "\nIngrese un numero: ";
    cin >> numero;

    if (numero % 5 == 0 && numero % 7 == 0) {
        cout << "El numero es multiplo de 5 y de 7.\n";
    } else {
        cout << "El numero no es multiplo de 5 y de 7.\n";
    }
}

void ejercicio9() {
    int calificacion;
    cout << "\nIngrese la calificacion (0-100): ";
    cin >> calificacion;

    if (calificacion >= 90 && calificacion <= 100) {
        cout << "Calificacion: A\n";
    } else if (calificacion >= 80 && calificacion <= 89) {
        cout << "Calificacion: B\n";
    } else if (calificacion >= 70 && calificacion <= 79) {
        cout << "Calificacion: C\n";
    } else if (calificacion >= 60 && calificacion <= 69) {
        cout << "Calificacion: D\n";
    } else if (calificacion >= 0 && calificacion <= 59) {
        cout << "Calificacion: F\n";
    } else {
        cout << "Calificacion no valida.\n";
    }
}

void ejercicio10() {
    double precio, descuento;
    cout << "\nIngrese el precio del articulo: ";
    cin >> precio;
    cout << "Ingrese el porcentaje de descuento: ";
    cin >> descuento;

    double precioFinal = precio - (precio * descuento / 100);
    cout << "El precio final despues del descuento es: " << precioFinal << "\n";
}

void ejercicio11() {
    int i = 1;
    while (i <= 20) {
        cout << i << " ";
        i++;
    }
    cout << "\n";
}

void ejercicio12() {
    int numero, i = 1;
    cout << "\nIngrese un numero: ";
    cin >> numero;

    while (i <= numero) {
        cout << i << " ";
        i++;
    }
    cout << "\n";
}

void ejercicio13() {
    int numero, suma = 0;
    cout << "\nIngrese numeros positivos (ingrese un numero negativo para detener):\n";

    while (true) {
        cin >> numero;
        if (numero < 0) {
            break;
        }
        suma += numero;
    }

    cout << "La suma de los numeros ingresados es: " << suma << "\n";
}

void ejercicio14() {
    int limite, a = 0, b = 1, c;
    cout << "\nIngrese un numero para generar la secuencia de Fibonacci: ";
    cin >> limite;

    cout << "Secuencia de Fibonacci: ";
    while (a <= limite) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << "\n";
}

void ejercicio15() {
    int numero, suma = 0;
    cout << "\nIngrese numeros hasta que la suma sea mayor a 100:\n";

    while (suma <= 100) {
        cin >> numero;
        suma += numero;
    }

    cout << "La suma total es: " << suma << "\n";
}

void ejercicio16() {
    int numero, i = 1;
    cout << "\nIngrese un numero: ";
    cin >> numero;

    while (i <= numero) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }
    cout << "\n";
}