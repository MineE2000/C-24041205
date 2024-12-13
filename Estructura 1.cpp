//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <iostream>
#include <windows.h> 
using namespace std; 
int main(){
	
	SetConsoleCP(CP_UTF8); 
	SetConsoleOutputCP(CP_UTF8);
	struct Estudiante {
		string nombre; 
		int edad; 
		int calificacion[5]; 
	}; 
	Estudiante estudiante1; 
	cout << "Ingresa el nombre del estudiante: ";
	getline(cin,estudiante1.nombre);
	cout << "Ingresa la edad del estudiante: "; 
	cin >> estudiante1.edad; 
	cout << "ingresa las calificaciones de 5 materias: \n"; 
	for(int i=0; i<5; i++){
		cout << "calificacion de la unidad " << i+1 << ": "; 
		cin >> estudiante1.calificacion[i];
	}
	cout << "Informacion del estudiante: \n"; 
	cout << "Nombre: "<< estudiante1.nombre << "\n"; 
	cout << "Edad: " << estudiante1.edad << "\n";
	cout << "calificacion: " ; 
	
	for(int i=0; i<5; i++){
		cout << estudiante1.calificacion[i] << " "; 
	}
	
	cout << "\n"; 
	
	return 0; 
}