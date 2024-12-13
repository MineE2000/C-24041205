//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
//cifrado array 
#include <iostream>

using namespace std; 

int main() 
{
	string cadena =  "Hola Mundo";
    string cadenacifrada = "";

for(int i=0; i<cadena.length(); i++)
{
cadenacifrada += (char) (cadena[i]+1);
}
cout << cadenacifrada << endl;
 return 0; 
}