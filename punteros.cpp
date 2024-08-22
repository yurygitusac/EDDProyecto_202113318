#include <iostream>
using namespace std;

int main()
{
    int *a, b, **c, *d;

    b = 10;
    a = &b;
    c = &a;
    d = a;

    cout << "Valor de b: " << b << endl;
    cout << "Direccion de b: " << &b << endl;
    cout << "Valor de a: " << a << endl;
    cout << "Direccion de a: " << &a << endl;
    cout << "*a: " << *a << endl;
    cout << "Valor de c: " << c << endl;
    cout << "Direccion de c: " << &c << endl;
    cout << "*c: " << *c << endl;
    cout << "**c: " << **c << endl;
    cout << "direccion de c: " << &c << endl;
    cout << "direccion de &*c: " << &*c << endl;
    cout << "valor de d: " << d << endl;
    cout << "direccion de d: " << &d << endl;
    cout << "*d: " << *d << endl;

}