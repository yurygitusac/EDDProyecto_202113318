#include <iostream>
#include <queue>
#include <stack>

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

    // El último número en extraer de S
    int ultimoNumeroEnS = S.top();

    std::cout << "El último número en extraer de S es: " << ultimoNumeroEnS << std::endl;

    return 0;
}
