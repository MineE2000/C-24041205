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
float A1, A3, A2, B1, B2, B3, C1, C2, C3; 
char nombre1 [20];
char apellido1a [20];
char apellido2a [20];
char nombre2 [20];
char apellido1b [20];
char apellido2b [20];
char nombre3 [20];
char apellido1c [20];
char apellido2c [20];
cout<<"Hola bien venido";
cout<<"llene los datos de los alumnos\n";
cout<<"Nombre del primer alumno: \n";
cin>>nombre1;
cout<<"Apellido paterno: \n";
cin>>apellido1a;
cout<<"Apellido materno: \n";
cin>>apellido2a;
cout<<"Nombre del segundo alumno: \n";
cin>>nombre2;
cout<<"Apellido paterno: \n";
cin>>apellido1b;
cout<<"Apellido materno: \n";
cin>>apellido2b;
cout<<"Nombre del terser alumno: \n";
cin>>nombre3;
cout<<"Apellido paterno: \n";
cin>>apellido1c;
cout<<"Apellido materno: \n";
cin>>apellido2c;
cout<<"A continuacion ingrese las calificaciones de "<< nombre1<<":\n";
cout<<"calificación 1:";
cin>>A1;
cout<<"calificación 2:";
cin>>A2;
cout<<"calificación 3:";
cin>>A3;
cout<<"A continuacion ingrese las calificaciones de "<< nombre2<<":\n";
cout<<"calificación 1:";
cin>>B1;
cout<<"calificación 2:";
cin>>B2;
cout<<"calificación 3:";
cin>>B3;
cout<<"A continuacion ingrese las calificaciones de "<< nombre3<<":\n";
cout<<"calificación 1:";
cin>>C1;
cout<<"calificación 2:";
cin>>C2;
cout<<"calificación 3:";
cin>>C3;
cout<<"La calificacion de "<<nombre1<<" "<<apellido1a<<" "<<apellido2a<<" es: "<< (A1+A2+A3)/3<<"\n";
cout<<"La calificacion de "<<nombre2<<" "<<apellido1b<<" "<<apellido2b<<" es: "<< (B1+B2+B3)/3<<"\n";
cout<<"La calificacion de "<<nombre3<<" "<<apellido1c<<" "<<apellido2c<<" es: "<< (C1+C2+C3)/3<<"\n";
cout<<"Gracias por utlizar el programe de GlibTugboat115 \n"; 
cout<<"Hasta la proxima UwU";
return 0; 
}