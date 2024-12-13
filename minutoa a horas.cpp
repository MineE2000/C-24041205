//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include<stdio.h>
#include<iostream>
#include<windows.h>
using namespace std; 
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int min, hor, min2;
	cout<<"Dame la cantidad de minutos para convertir a minutos: "; 
	cin>>min; 
	hor = min/60; 
	min2 = min%60;
	cout<< min<<"Minutos equivale a " <<hor<<":"<<min2<<"\n"; 
	printf("%2d minutos equivale a %02d:%02d", min, hor, min2);
	return 0;
}