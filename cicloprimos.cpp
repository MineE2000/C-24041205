//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <iostream>
#include<cmath>
#include<windows.h>

using namespace std;
int nume;
bool esPrimo=true;
int main(){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	cout<<"ingresa un número entero:";
	cin>> nume;
	
	if(nume<2){esPrimo=false;
	}
	else{
		for(short int i=2;i<=sqrt(nume);i++){
			if(nume%i==0){
				esPrimo=false;
				break;
			}
		}
	}
	

		if(esPrimo){
		cout<<nume<<" Es un número primo";
	}
	
 else {
    cout << nume<< " No es un número primo.";
}
return 0;
}
