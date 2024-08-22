#include <iostream>
#include <vector>

using namespace std;

void burbujaRecursiva(vector<int>& arr, int i, int j) {
    // Caso base: Si j llega a 0, pasa a la siguiente iteración de i.
    if (j == 0) {
        if (i == arr.size() - 1) {
            return; // Termina el algoritmo
        }
        burbujaRecursiva(arr, i + 1, arr.size() - 1);
        return;
    }

    // Realiza la comparación e intercambio si es necesario
    if (arr[j] < arr[j - 1]) {
        swap(arr[j], arr[j - 1]);
    }

    // Llamada recursiva con j reducido
    burbujaRecursiva(arr, i, j - 1);
}

int main() {
    vector<int> arr = {17, 10, 12, 7, 11};
    
    // Inicialmente se llama la función con i=1 y j=4
    burbujaRecursiva(arr, 1, 4);

    // Imprime el resultado del arreglo después de la ordenación parcial
    cout << "Arreglo después de aplicar el ordenamiento burbuja recursivo: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
