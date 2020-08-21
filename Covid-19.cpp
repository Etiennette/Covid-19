/*GRADO DE VULNERABILIDAD ANTE EL CONTAGIO COVID -19 */

#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include<string>
using namespace std; 
int main()
{
    int sexo;
    int edad;
    
	cout<<"GRADO DE VULNERABILIDAD ANTE EL CONTAGIO COVID -19"<<endl;
	cout<<"Ingresa sexo 0:FEMENINO 1:MASCULINO"<<endl;
	cin>>sexo;
	
	if(sexo==1){
		cout<<"Eres Hombre";
		
		
	}else
		cout<<"Eres mujer\n";
		
	cout<<"Ingresa Edad:"<<endl;	
	cin>>edad;
	cout<<"Tienes:"<<edad<<"  years"<<endl;
	cout<<"Ingresa si tienes lo siguiente :"<<endl;	
	cout<<" [1]Peso bajo :"<<endl;	
	cout<<" [2]Peso Normal :"<<endl;
	cout<<" [3]Sobrepeso :"<<endl;
	cout<<"	[4]Obesidad:"<<endl;
	cin>>edad;
	
	
	return 0; 
}
