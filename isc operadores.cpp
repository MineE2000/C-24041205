//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include<stdio.h>
#include <iostream>
#include<Windows.h>
using namespace std;
main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x=10,y=3;
	int z = 10; 
    int *dirz = &z; 
	cout<<x<<"+"<<y<<"="<<x+y<<"\n";//13
	cout<<x<<"-"<<y<<"="<<x-y<<"\n";//7
	cout<<x<<"*"<<y<<"="<<x*y<<"\n";//30
	cout<<x<<"/"<<y<<"="<<x/y<<"\n";//3
	cout<<x<<" residuo% "<<y<<"="<<x%y<<"\n";//1
	cout<<x<<" incrementado="<<++x<<" o bien "<<x+1<<"\n";
	cout<<x--<<" decrementado\n";
	
	printf("Dame un número entero: ");
	cin>>x;
	x>0?cout<<"positivo ":cout<<" negativo  ";
	cout<<"\nDame un número entero: ";
	cin>>x;
	x>0?cout<<"positivo ":x<0?cout<<" negativo ":cout<<"es cero";
		
	x=0;
	cout<<"\nx="<<x<<"\n";
	cout<<"x++ = "<<x++<<"\n";
	cout<<"x="<<x<<"\n";
	cout<<"++x = "<<++x;
	cout<<"\nx="<<x<<"\n";
	cout<<"y="<<y<<". La dirección de y es "<<&y<<"\n";	
	

    cout << "El valor de z: " << z << endl;              
    cout << "La dirección de z (&z): " << &z << endl;     
    cout << "La dirección de z almacenada en dirz: " << dirz << endl;
	cout<<"El contenido en *dirz: "<<*dirz<<endl;
	
	return 0;
}