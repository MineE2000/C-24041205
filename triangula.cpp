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
float L1,L2,L3; 
cout<<"Hola bien venido\n";
cout<<"Ingrece el primer lado del triangulo: \n";
cin>>L1;
cout<<"Ingrece el segundo lado del triangulo: \n";
cin>>L2;
cout<<"Ingrece el tercer lado del triangulo: \n";
cin>>L3;
if(L1==L2 && L1==L3){
	cout<<"El triangulo es equilatero.\n";}
	else if(L1!=L2 && L1!=L3 && L2!=L3){
	cout<<"El triangulo es escaleno.\n";}
	else{
		cout<<"El triangulo es isoceles";}
return 0;
}