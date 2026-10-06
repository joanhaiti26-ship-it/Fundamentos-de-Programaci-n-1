#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Saludar" << endl;
        cout << "2. Mostrar mensaje" << endl;
        cout << "3. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Hola, bienvenido." << endl;
                break;

            case 2:
                cout << "Estas utilizando un ciclo do-while." << endl;
                break;

            case 3:
                cout << "Programa terminado." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
        }

    } while (opcion != 3);

    return 0;
}