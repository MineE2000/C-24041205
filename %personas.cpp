//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <windows.h> 
#include <iostream> 
using namespace std; 
main () 
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8); 
	float  N1, N2, total, TPH, TPM;
	cout<<"Dime la cantidad de hombres asistentes:";
	cin>>N1;
	cout<< "Dime la cantidad de mujeres asistidas:";
	cin>>N2; 
	total=N1+N2;
	cout<<"El total de asistentes"<<total<<"\n"; 
	TPH=N1*100/total; 
	TPM=N2*100/total; 
	cout<<"Hombres: "<<TPH<<"%\n"<<"Mujeres: "<<TPM<<"%"; 
	return 0; 
}