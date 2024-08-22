#include <iostream>
#include <stack>

int iteraciones(int a, int b) {
    std::stack<int> pila;
    pila.push(a);
    int iteraciones = 0;

    while (!pila.empty()) {
        int actual = pila.top();
        pila.pop();
        iteraciones++;

        if (actual == b) {
            return iteraciones;
        }

        pila.push(actual - 1);
        pila.push(actual + 1);
    }

    return iteraciones;  // Esto no debería ocurrir si b es alcanzable
}

int main() {
    int a = 2;
    int b = 2;
    int result = iteraciones(a, b);
    std::cout << "Número de iteraciones: " << result << std::endl;
    return 0;
}
