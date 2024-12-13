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
cout<<"introdusca el primer numero: \n"; 
cin>>A; 
cout<<"introdusca el segundo numero: \n"; 
cin>>B;
if(A>B){
	cout<<"El mayor es el primer numero.\n";}
	else if(A<B){
	cout<<"El segundo numero es mayor.\n";}
	else{
	cout<<"Los numeros son iguales.\n";}
printf("numero a: %0.f numero b: %.1f",A,B);
return 0;
}