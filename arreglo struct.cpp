//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	struct Estudiante {
    	char nombre[10];
    	int edad;
    	int calificaciones[3]; 
	};
	const int NUM_ESTUDIANTES = 3; 
    Estudiante estudiantes[NUM_ESTUDIANTES]; 

    for (int i=0; i<NUM_ESTUDIANTES;i++) {
        cout<<"\nIngresa los datos del estudiante #"<<i+1<<":\n";        
        cout << "Nombre: ";
        int j=0;
         cout << "Nombre (máximo 9 caracteres): ";
        int pos = 0;
        char c;
       	while (true) {
            c = getche(); 
            if (c == '\r') { 
                break;
            }
            if (c == 8 && pos > 0) { 
                pos--; 
                cout << "\b \b"; 
            } else if (pos < 9) { 
                estudiantes[i].nombre[pos++] = c;
            } else {
                continue; 
            }
        }
        estudiantes[i].nombre[pos] = '\0'; 
        cout << endl;
        cout<<"Edad: ";
        cin>>estudiantes[i].edad;

        cout<<"Ingresa las calificaciones de 3 materias:\n";
        for (int j=0;j<3; j++) {
            cout<<"Calificación #"<<j+1<<": ";
            cin>>estudiantes[i].calificaciones[j];
        }
    }

    cout<<"\nInformación de los estudiantes:\n";
    for (int i=0;i<NUM_ESTUDIANTES;i++){
        cout<<"\nEstudiante #"<<i+1<<":\n";
        cout<<"Nombre: "<<estudiantes[i].nombre<<"\n";
        cout<<"Edad: "<<estudiantes[i].edad<<"\n";   
        cout << "Calificaciones: ";
        for (int j=0;j<3;j++){
            cout<<estudiantes[i].calificaciones[j]<<" ";
        }
        cout<<"\n";
    }
    
	return 0;
}