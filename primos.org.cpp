//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include<windows.h>
#include<iostream>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
    int numero; 
    bool esPrimo = true; 

    cout << "Ingrese un número: "; 
    cin >> numero; 

    
    if (numero <= 1) {
        esPrimo = false; 
    } else {
        
        for (int i = 2; i <= numero; i++) {
            
            if (numero % i == 0) {
                esPrimo = false; 
                break; 
            }
        }
    }

  
    if (esPrimo) {
        cout << numero << " es un número primo." << endl; // El número es primo
    } else {
        cout << numero << " no es un número primo." << endl; // El número no es primo
    }

    return 0; 
}