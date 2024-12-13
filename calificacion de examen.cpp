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
float A, B, C;
char nombre [20];
char NUMCON [20];
cout<<"Hola le ayudare a calificar un examen en donde cada pregunta tiene distinto valor.\n";
cout<<"Respuestas correctas valen 5 puntos.\n"; 
cout<<"Respuestas incorrectas -1 punto.\n"; 
cout<<"Respuestas sin responder se invalidan como 0.\n"; 
cout<<"Por favor a continuacion ingrece los siguientes datos"; 
cout<<"Nombre del alumno: "; 
cin>>nombre; 
cout<<"Numero de control: "; 
cin>>NUMCON;
cout<<"A continuacion ingrese las respuestas.\n";
cout<<"Respuestas correctas: "; 
cin>>A;
cout<<"Respuestas incorrectas: "; 
cin>>B;
cout<<"Respuestas anuladas: "; 
cin>>C;
cout<<"Alumno: "<< nombre; 
cout<<"Numero de control: "<<NUMCON;
cout<<"puntos totales obtenidos"<< (A*5)-B; 





return 0;
}