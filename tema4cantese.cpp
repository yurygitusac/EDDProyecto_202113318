#include <iostream>
#include <queue>
#include <stack>
#include <vector>

int main() {
    std::priority_queue<int> H;  // Cola de prioridad (máxima, par)
    std::queue<int> Q;           // Cola normal
    std::stack<int> S;           // Pila

    // Insertar los números 0, 1, 2, ..., 9 en la cola de prioridad H
    for (int i = 0; i <= 9; ++i) {
        H.push(i);
    }

    // Extraer 5 números de H e ingresarlos en S
    for (int i = 0; i < 5; ++i) {
        int num = H.top();
        H.pop();
        S.push(num);
    }

    // Extraer 5 números de H e ingresarlos en Q
    for (int i = 0; i < 5; ++i) {
        int num = H.top();
        H.pop();
        Q.push(num);
    }

    // Extraer 3 números de Q e ingresarlos en H
    for (int i = 0; i < 3; ++i) {
        int num = Q.front();
        Q.pop();
        H.push(num);
    }

    // Extraer 3 números de S e ingresarlos en H
    for (int i = 0; i < 3; ++i) {
        int num = S.top();
        S.pop();
        H.push(num);
    }

    // Crear una nueva cola de prioridad impar H_impar
    std::priority_queue<int, std::vector<int>, std::greater<int>> H_impar;

    // Extraer los números restantes en H e ingresarlos en H_impar
    while (!H.empty()) {
        int num = H.top();
        H.pop();
        H_impar.push(num);
    }

    // Imprimir los números en H_impar
    while (!H_impar.empty()) {
        std::cout << H_impar.top();
        H_impar.pop();
    }

    std::cout << std::endl;
    return 0;
}
