//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <iostream> 
#include<stdio.h>
#include<time.h>

using namespace std;

main( )
{
	int matriz[10][10];
	int i,j,n;
	srand(time(0)); 
	
	do{
		cout<<"Dime cuantos elementos por lado tiene la matriz? <2-10>";
		cin>>n;
	}while(n>10 or n<2);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			matriz[i][j]=rand()%100; 
	cout<<"Impresion de la matriz\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%3d",matriz[i][j]);
		cout<<"\n";
	}
	cout<<"Impresion de las matrices superdiagonal y subdiagonal en un ciclo\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
				printf("%3d",matriz[i][j]);
			else
				printf("   ");
		}
		cout<<"\n";
	}
	
	return 0; 
}