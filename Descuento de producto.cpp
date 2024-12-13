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
float A, B; 
char CC [20];
cout<<"Hola bien venido \n";
cout<<"A contunuacion ingrece el nombre del producto: \n";
cin>>CC; 
cout<<"Ingrece el precio regular del producto: \n"; 
cin>>A; 
cout<<"Ingrece el porcentaje del descuento que se le quiere aplicar a lproducto: \n";
cin>>B;
cout<<"El precio del producto "<<CC<<" con descuento es de: \n"; 
cout<<A-((A*B)/100)<<"\n";
cout<<"Nos vemos en la proxima.\n";
cout<<"Adios"; 
return 0;
}