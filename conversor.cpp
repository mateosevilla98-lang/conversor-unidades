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
int main() {
    int opcion;
    cout << "--- Conversor de Unidades ---" << endl;
    cout << "1. Metros a Kilometros" << endl;
    cout << "2. Metros a Millas" << endl;
    cout << "3. Salir" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;
    
    if(opcion == 1) {
        metrosAKilometros();
    } else if (opcion == 2) {
        metrosAMillas();
    } else if (opcion == 3) {
        cout << "Saliendo del programa..." << endl;
    } else {
        cout << "Opcion no valida." << endl;
    }
    
    return 0;
}