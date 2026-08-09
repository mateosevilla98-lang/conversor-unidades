#include <iostream>

using namespace std;
 void metrosAKilometros() {
    double metros;
    cout << "Ingrese cantidad en metros: ";
    cin >> metros;
    cout << metros << " m equivalen a " << metros / 1000.0 << " km." << endl;
}

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