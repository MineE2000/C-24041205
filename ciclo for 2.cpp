//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int x, y;
	float z;
	
	for(x=100;x>0;x=x-3)
	{
		cout<<x<<", ";
	}
	
	cout<<"\n";
	system("PAUSE");
	
	for(x=100;x!=65;x-=5)//x=x-5
	{
		z=sqrt(x);
		cout<<"La raíz cuadrada de "<<x<<" es "<<z<<"\n";
	}
	
	system("PAUSE");

	x=10;
	for(y=10;y!=x;++y)
		cout<<y<<" Dentro del ciclo (nunca entra)\n";
	cout<<y<<" Fuera del ciclo\n";
	
	system("PAUSE");

	for(x=0,y=0;x+y<10;++x)
	{
		cout<<"Dame el valor de y: ";
		cin>>y;
		cout<<x<<"+"<<y<<"="<<x+y<<" El ciclo continúa mientras la suma sea <10\n";
	}	
	cout<<x<<"+"<<y<<"="<<x+y<<" Fuera del ciclo\n";

	for(x=0;x!=123;)
	{
		cout<<"Dame el valor de x, 123 para terminar el ciclo: ";
		cin>>x;
	}
	system("PAUSE");

	x=1;
	
	for(;x<=10;)
	{
		printf("%d\n",x);
		++x;
	}
	
	system("PAUSE");
	
	cout<<"Hola mundo\n";
	for(x=0;x<10000000;x++);
		cout<<"Hola mundo después de unos cuantos segundos";
		
	return 0;
}