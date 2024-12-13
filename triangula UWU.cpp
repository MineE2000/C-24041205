//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <iostream> 
#include <windows.h>
using namespace std; 
int main() 
{
	SetConsoleOutputCP(CP_UTF8); 
	float LA, AN, area, perimetro; 
	cout<<"Dame la medida del largo del triangulo: "; 
	cin>>LA; 
	cout<<"Dame el ancho: "; 
	cin>>AN ; 
	area=(AN*LA)/2;
	perimetro=(AN*2)+(LA); 
	cout<<"El area abarca: "<<area<<"\n"; 
	cout<<"El perimetro mide: "<<perimetro<<"\n";
	return 0; 
}