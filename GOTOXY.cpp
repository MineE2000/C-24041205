//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <iostream>
#include <windows.h>  // Necesario para SetConsoleCursorPosition
using namespace std;

// Función gotoxy para mover el cursor a la posición (x, y)
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    cout << "Texto inicial en la posición por defecto." << endl;
    
    gotoxy(10, 5);  // Mueve el cursor a la posición (10, 5)
    cout << "Texto en la posición (10, 5)." << endl;

    return 0;
}