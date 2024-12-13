//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <iostream> 
#include<stdio.h>
#include<time.h>
using namespace std;
main( )
{
	int matriz[5][5];
	int i,j;
	srand(time(0)); 
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cout<<"Dame el valor del renglón "<<i<<" columna "<<j;
			cin>>matriz[i][j];
			
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%3d",matriz[i][j]);
			
		cout<<"\n";
	}
	return 0; 
}