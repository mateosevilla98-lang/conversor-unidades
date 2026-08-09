#include <iostream>

using namespace std;

int main() {
    int opcion;
    cout << "--- Conversor de Unidades ---" << endl;
    cout << "1. Salir" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;
    
    if(opcion == 1) {
        cout << "Saliendo del programa..." << endl;
    } else {
        cout << "Opcion no valida." << endl;
    }
    
    return 0;
}