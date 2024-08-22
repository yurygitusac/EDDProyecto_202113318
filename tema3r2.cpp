#include <iostream>

using namespace std;

// Definición de la función recursiva r2
int r2(int a, int b) {
    if (a != 0) {
        return b + r2(a - 1, b) + r2(a - 1, b);
    }
    return 0;
}

int main() {
    // Inicializar los valores de a y b
    int a = 1;
    int b = 0;

    // Llamar a la función r2 y almacenar el resultado
    int resultado = r2(a, b);

    // Imprimir el resultado en la consola
    cout << "El resultado de r2(" << a << ", " << b << ") es: " << resultado << endl;

    return 0;
}
