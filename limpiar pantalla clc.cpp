//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <iostream>
#include <cstdlib>  // Necesario para usar system()
using namespace std;

int main() {
    cout << "Este texto se mostrará antes de limpiar la pantalla." << endl;
    
    system("pause");  // Solo funciona en Windows
    
    system("CLS");  // Limpia la pantalla (solo funciona en Windows)

    cout << "La pantalla ha sido limpiada." << endl;
    return 0;
}