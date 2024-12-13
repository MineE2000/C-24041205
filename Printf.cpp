//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <cstdio>  // Biblioteca que incluye printf

int main() {
    int edad = 28;
    float altura = 1.75;
    char inicial = 'A';
    const char* nombre = "Carlos";

    // Usando printf para imprimir diferentes tipos de datos
    printf("Nombre: %s\n", nombre);
    printf("Edad: %d años\n", edad);
    printf("Altura: %.2f metros\n", altura);  // .2 para limitar a 2 decimales
    printf("Inicial: %c\n", inicial);

    return 0;
}