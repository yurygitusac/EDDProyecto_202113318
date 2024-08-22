#include <iostream>

using namespace std;

// Definición de la función recursiva r2
int r1(int a, int b) {
    if (a != 0) {
        return b + r1(a - 1, b -1);
    }
    return 0;
}

int main() {
    // Inicializar los valores de a y b
    int a = 3;
    int b = 4;

    // Llamar a la función r2 y almacenar el resultado
    int resultado = r1(a, b);

    // Imprimir el resultado en la consola
    cout << "El resultado de r1(" << a << ", " << b << ") es: " << resultado << endl;

    return 0;
}
