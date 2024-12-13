//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <windows.h>
#include <iostream> 
#include <math.h>
using namespace std; 
int main()
{
SetConsoleOutputCP(CP_UTF8); 
float b, B, L, h; 
cout<<"Hola tilino UwU \n";
cout<<"Dame la base inferior del trapecio: ";
cin>>B;
cout<<"Ahora dame la base superior: ";
cin>>b;
cout<<"A continuacion dame el lado derecho del trapecio: ";
cin>>L;
cout<<"Por ultimo ingresa la altura del trapecio: "; 
cin>>h;
cout<<"El area del trapecio es: "<< ((B+b)/2)*h <<"cm^2 \n";
cout<<"Perímetro: "<< B+b+L+L <<"cm \n";
cout<<"Adios pupulines OwO";
return 0;
}