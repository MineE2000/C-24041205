//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
//juego ascii
#include <iostream>
#include <string>
#include <sstream>
#include<conio.h>
#include<windows.h>
#include<time.h>
using namespace std;

string PLG; 
string encryptToASCII(const string& input) {
    ostringstream encryptedStream;

    for (char c : input) {
       
        encryptedStream << static_cast<int>(c) << " ";
    }

    return encryptedStream.str(); 
}

int main() {
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
int i, R; 
     char array[10]; 

    cout << "REGLAS:\n";
	cout<<"  1.- No escribir mas de 10 caracteres en el código.\n\n";
	cout<<"  2.- No traducir manualmente el codigo.\n\n";
	cout<<"  2.- La persona que introdujo el código no puede jugar o dar pistas.\n\n";
	cout<<"  4.- Evitar modificar el código fuente del juego\n\n.";
    system("PAUSE"); 
        system("CLS");
        cout << "                 -->SE PUEDE UTILIZAR CARACTERES ESPECIALES<-- \n";
    cout << "Ingresa el codigo a encriptar: \n";
    cin>>array;

        system("CLS");
    
    string encryptedText = encryptToASCII(array);

    cout <<"        *TIENE 3 OPORTUNIDADES*\n";
   

R=3;
	for(i=0;i<3;i++)
       {	
       
        cout << "            CODIGO: [ " << encryptedText <<"]"<< endl;
        cout<<"Ingrese el codigo: ";
	    cin>>PLG;
	    
        if(PLG==array){
        	
	     system("CLS");
        cout<<"El codigo es CORRECTO\n";
        cout<<"FELICIDADES\n";
                break; 
	}
	else
	{
		 system("CLS");
        cout<<"El codigo es INCORRECTO\n";
        R=R-1;
         cout <<"te quedan ("<<R<<") oportunidades\n";
	}
	}
	 	cout<<"Nos vemos en la proxima"; 

	 
	 
	 
	 
    return 0;
}