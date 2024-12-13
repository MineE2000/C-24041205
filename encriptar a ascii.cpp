//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
//ASCII
#include <iostream>
#include <string>
#include <sstream>
#include<conio.h>
#include<windows.h>
#include<time.h>
using namespace std;

string encryptToASCII(const string& input) {
    ostringstream encryptedStream;

    for (char c : input) {
       
        encryptedStream << static_cast<int>(c) << " ";
    }

    return encryptedStream.str(); 
}

int main() {
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

     char array[100]; 


    cout << "Ingresa el texto a encriptar: ";
    cin.getline(array,100);

        system("CLS");
    
    string encryptedText = encryptToASCII(array);

    
    cout << "Texto encriptado en ASCII: " << encryptedText << endl;


    return 0;
}