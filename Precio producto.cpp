//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
int x,y;
	
	cout << "Dame el precio de tu producto \n";
	cin >> y;
	
	
	do{
		cout << "Dame el precio del producto \n";
		cin >> x;
		if(x==y)
			continue;
			y++;
	}while(y<6);
	
		for(y;y==x;y++){
		cout << "Dame el precio del producto \n";
		cin >> x;
		if(x==y)
			continue;
		cout << "Felicidades";
	}
	
	return 0;
}