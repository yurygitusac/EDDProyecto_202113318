#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> H; // Usamos greater<int> para hacerla min-heap
    queue<int> Q;
    stack<int> S;

    for (int i = 0; i <= 9; ++i) {
        H.push(i);
    }

    // Extraer 5 números de H e ingresarlos en S
    for (int i = 0; i < 5; ++i) {
        S.push(H.top());
        H.pop();
    }

    // Extraer 5 números de H e ingresarlos en Q
    for (int i = 0; i < 5; ++i) {
        Q.push(H.top());
        H.pop();
    }

    // Extraer 3 números de Q e ingresarlos en H
    for (int i = 0; i < 3; ++i) {
        H.push(Q.front());
        Q.pop();
    }

    // Extraer 3 números de S e ingresarlos en H
    for (int i = 0; i < 3; ++i) {
        H.push(S.top());
        S.pop();
    }

    // Considerando como quedó Q, mostrar el primer número que será extraído
    if (!Q.empty()) {
        cout << "El primer número en ser extraído de Q es: " << Q.front() << endl;
    } else {
        cout << "La cola Q está vacía." << endl;
    }

    return 0;
}