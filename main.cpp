#include <iostream> //include is para agregar una libreria

using namespace std; //using namespace es para no tener que escribir std::cout

int main() //int main es la funcion principal
{
    int num1; //int es para declarar una variable entera
    int num2; //int es para declarar una variable entera
    int suma;

    cout << "Hello, World!" << endl; //cout es para imprimir en pantalla, endl es para hacer un salto de linea

    cout << "Ingrese el primer numero: "; //cout es para imprimir en pantalla
    cin >> num1; //cin es para leer un valor desde el teclado

    cout << "Ingrese el segundo numero: "; //cout es para imprimir en pantalla
    cin >> num2; //cin es para leer un valor desde el teclado

    suma = num1 + num2; //suma es una variable que guarda la suma de num1 y num2

    cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << endl; //cout es para imprimir en pantalla

    if (suma > 0){
        cout << "La suma es positiva" << endl;
    } else if (suma < 0){
        cout << "La suma es negativa" << endl;
    } else {
        cout << "La suma es cero" << endl;
    }

    for (int i =0; i < 5; i++){
        cout << i << " " ;
    }   

    return 0; //return 0 es para indicar que el programa termino correctamente

}