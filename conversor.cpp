#include <iostream>

using namespace std;
void gramosAKilogramos() {
    double gramos;
    cout << "Ingrese cantidad en gramos: ";
    cin >> gramos;
    cout << gramos << " g equivalen a " << gramos / 1000.0 << " kg." << endl;
}
void gramosALibras() {
    double gramos;
    cout << "Ingrese cantidad en gramos: ";
    cin >> gramos;
    cout << gramos << " g equivalen a " << gramos / 453.592 << " libras." << endl;
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