//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float lado1, lado2 , area, perimetro;
	
	cout<<"Dame la medida del lado 1: ";
	cin>>lado1;
	cout<<"Dame la medida del lado 2: ";
	cin>>lado2;
	area=lado1*lado2;
	perimetro=(lado1*2)+(lado2*2);
	
	cout<<"El área mide: "<<area<<"\n";
	cout<<"El perímetro mide: "<<perimetro<<"\n";

	printf("El área mide: %5.0f\n", area);
	printf("El perímetro mide: %5.2f",perimetro);
	
	return 0;
}