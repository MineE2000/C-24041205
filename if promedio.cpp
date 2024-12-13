//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <windows.h>
#include <iostream> 
#include <math.h>
#include <conio.h>
#include <string.h>
using namespace std; 
int main()
{
SetConsoleOutputCP(CP_UTF8); 
float A1, A3, A2, prom; 
char nombre1 [20];
char apellido1a [20];
char apellido2a [20];
cout<<"Hola bien venido";
cout<<"llene los datos de los alumnos\n";
cout<<"Nombre del primer alumno: \n";
cin>>nombre1;
cout<<"Apellido paterno: \n";
cin>>apellido1a;
cout<<"Apellido materno: \n";
cin>>apellido2a;
cout<<"A continuacion ingrese las calificaciones de "<< nombre1<<":\n";
cout<<"calificación 1:\n";
cin>>A1;
cout<<"calificación 2:\n";
cin>>A2;
cout<<"calificación 3:\n";
cin>>A3;
prom=(A1+A2+A3)/3;
cout<<"El promedio de "<<nombre1<<" "<<apellido1a<<" "<<apellido2a<<" es de una: \n";
if (prom>=90){
	cout<<"A";}
	else (prom<=80);{
		cout<<"B";}
		if(prom<=70);{
			cout<<"C";}
			if (prom<=60);{
				cout<<"B";}
				if (prom<=5.9999);{
					cout<<"NA";}
return 0; 
}