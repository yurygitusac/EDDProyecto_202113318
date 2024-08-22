#include <iostream>
#include <queue>

void funcion(int a, int b) {
    std::queue<int> cola;
    cola.push(a);

    int iteraciones = 0;

    while (!cola.empty()) {
        int actual = cola.front();
        cola.pop();
        iteraciones++;

        if (actual == b) {
            std::cout << "Se encontró el valor " << b << " después de " << iteraciones << " iteraciones." << std::endl;
            return;
        }

        cola.push(actual - 1);
        cola.push(actual + 1);
    }
}

int main() {
    int a = 2;
    int b = 2;
    funcion(a, b);
    return 0;
}
