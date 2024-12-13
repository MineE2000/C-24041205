//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include<iostream>
#include<windows.h>
using namespace std; 
void marco1(void);
void marco2(char c, int c1, int r1, int c2, int r2); 
void gotoxy (int x, int y); 
int y = 123;
int x = 1000; 
int main (void) 
{
	int x=0
	int r1, r2 ,c1, c2; 
	char c; 
	marco1(); 
	gotoxy(10,10); 
	cout<<"El valor x en main es: "<<x; 
	marco2('*',60,2,70,5); 
	marco2('@',10,15,60,17);
	gotoxy(1,20); 
	system("PAUSE");
	system("CLS"); 
	printf ("Captura de parametros\n"); 
	printf("Con cual caracter quieres que se imprima el marco? ");
	cin>>c; 
	cout<<"Dame la columna 1: ";
	cin>>c1; 
	cout<<"Dame el renglon 1: "; 
	cin>>r1;
	cout<<"Dame la columna 2: "; 
	cin>>C2
	cout<<"Dame el renglon 2: "; 
	cin<<r2; 
	marco2(c,c1,r1,c2,r2); 
	gotoxy(1,26); 
	return 0;
}