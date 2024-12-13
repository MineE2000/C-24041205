//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <cstdlib>

#include <iostream> // Necesaria para ver el resultado en pantalla



using namespace std;



int main()

{

div_t resultado;

resultado = div(12,2); // El primer numero sera dividido entre el segundo



cout << "El resultado es:" << resultado.quot << endl;

cout << "El residuo es:" << resultado.rem << endl;



    system("pause");

    return 0;

}