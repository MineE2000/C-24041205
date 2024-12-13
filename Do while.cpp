//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <iostream>
using namespace std;

int main() {
    int i = 1;  // Inicialización de la variable

    // Ciclo do-while que imprime los números del 1 al 10
    do {
    //	do {
    // Código a ejecutar
    //} while (condición);
        cout << "Numero: " << i << endl;
        i++;  // Incremento de la variable
    } while (i <= 10);

    return 0;
}
    //Recuerda que en C++, el ciclo do-while es útil cuando deseas que el bloque de código se ejecute al menos una vez, independientemente de si la condición es verdadera o no. El ciclo solo se repetirá si la condición especificada es verdadera después de la primera ejecución.