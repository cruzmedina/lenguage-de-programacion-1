#include <iostream>

using namespace std;
int main() {
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad >=18) {
        cout << "Usted es mayor de edad." << endl;
        } else {
                cout << "Usted es menor de edad." << endl;
        }
        return 0;
}
