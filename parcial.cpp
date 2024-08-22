#include <iostream>
#include <vector>
#include <string>

using namespace std;

string diaDeLaSemana(int K, vector<int> A) {
    vector<string> dias = {"LUNES", "MARTES", "MIERCOLES", "JUEVES", "VIERNES", "SABADO", "DOMINGO"};
    int i = 0;
    
    while (K > 0) {
        if (A[i % 7] > 0) {
            K -= A[i % 7];
        }
        if (K <= 0) {
            return dias[i % 7];
        }
        i++;
    }

    return "";
}

int main() {
    int K = 865582978;
    vector<int> A = {39, 33, 43, 23, 28, 26, 38};

    string resultado = diaDeLaSemana(K, A);
    cout << resultado << endl;

    return 0;
}
