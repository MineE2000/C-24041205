//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
	float numerador,denominador;
	
	cout<<"Dame el numerador (dividendo): ";
	cin>>numerador;
	
	cout<<"Dame el denominador (divisor): ";
	cin>>denominador;
	
	if(denominador)
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
		
	else
		cout<<"La division sobre cero no se permite\n";
		
	system("pause");
	
	
	if(denominador!=0)
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
		
	else
		cout<<"La division sobre cero no se permite\n";
	system("pause");
	
	
	if(!denominador)
		cout<<"La division sobre cero no se permite";
		
	else
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador;
		
		return 0;
}