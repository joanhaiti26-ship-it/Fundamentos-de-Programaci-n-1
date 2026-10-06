#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout << "Ingresa numeros para sumarlos." << endl;
    cout << "Escribe 0 para terminar." << endl;

    cout << "Numero: ";
    cin >> numero;

    while (numero != 0) {
        suma += numero;

        cout << "Numero: ";
        cin >> numero;
    }

    cout << "La suma total es: " << suma << endl;

    return 0;
}