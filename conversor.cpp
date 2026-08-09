#include <iostream>

using namespace std;

void metrosAKilometros() {
    double metros;
    cout << "Ingrese cantidad en metros: ";
    cin >> metros;
    cout << metros << " m equivalen a " << metros / 1000.0 << " km." << endl;
}

void metrosAMillas() {
    double metros;
    cout << "Ingrese cantidad en metros: ";
    cin >> metros;
    cout << metros << " m equivalen a " << metros / 1609.34 << " millas." << endl;
}

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
    cout << "1. Metros a Kilometros" << endl;
    cout << "2. Metros a Millas" << endl;
    cout << "3. Gramos a Kilogramos" << endl;
    cout << "4. Gramos a Libras" << endl;
    cout << "5. Salir" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        metrosAKilometros();
    } else if (opcion == 2) {
        metrosAMillas();
    } else if (opcion == 3) {
        gramosAKilogramos();
    } else if (opcion == 4) {
        gramosALibras();
    } else if (opcion == 5) {
        cout << "Saliendo del programa..." << endl;
    } else {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}