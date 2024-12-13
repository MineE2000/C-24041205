//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
//array cin 
#include <iostream>

using namespace std; 

int main (){

 int array[8]; 
 for (int i = 0; i <= 8; i++)
 {
 	cout<<"Posicion: "<<i<< " : "; 
 	cin>>array[i]; 
 }
 cout<<"contenido de array\n";
 for (int i = 0; i <= 8; i++)
 {
 	cout << array[i] << "  ";
}
	return 0;
}