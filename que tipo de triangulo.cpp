//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205

#include<windows.h>
#include <iostream>

using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int l1, l2, l3;
	cout<<"Dame el valor del lado 1: ";
	cin>>l1;	
	cout<<"Dame el valor del lado 2: ";
	cin>>l2;
	cout<<"Dame el valor del lado 3: ";
	cin>>l3;
	
	if(l1==l2 && l1==l3)
		cout<<"El triángulo es equilatero";
		
	else
		if(l1!=l2 && l1!=l3 && l2!=l3)
		
			cout<<"El triángulo es escaleno";
			
		else
			cout<<"El triangulo es isósceles";
			
	return 0;
}