//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <windows.h>
#include <iostream> 
#include <math.h>
#include <conio.h>
#include <string.h>
using namespace std; 
int main() {
SetConsoleOutputCP(CP_UTF8); 
string IT;
char CON [30]; 
printf("Ingresa tu contraseña: ");
cin>>CON;
if(CON==IT)
{
	printf("**Correcto**");
}
else 
{
	printf("**Incorrecto**");
}
return 0;
}