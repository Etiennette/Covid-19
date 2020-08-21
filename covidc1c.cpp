#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include<string>

int main(){
	
	int sexo,diabetes,hipertension,fumar,EPOC,cardio,inmune;
    int edad,peso,puntaje;
    printf("GRADO DE VULNERABILIDAD ANTE EL CONTAGIO COVID -19");
	printf("\nIngresa sexo 0:FEMENINO 1:MASCULINO");
	scanf("%d",&sexo);
	printf("Ingresa tu Edad:");	
	scanf("%d",&edad);
	printf("Ingresa si tienes lo siguiente :\n");	
	printf(" [1]Peso bajo :");	
	printf(" [2]Peso Normal :");
	printf(" [3]Sobrepeso :");
	printf(" [4]Obesidad:");
	scanf("%d",&peso);	
	/*puntaje se inicializa en cero*/
	printf("Padeces DIABETES?:0/no 1/si");
	scanf("%d",&diabetes);	
	printf("Padeces Hipertensión:0/no 1/si");
	scanf("%d",&hipertension);	
	printf("Fumas?:0/no 1/si");
	scanf("%d",&fumar);
	printf("Tienes EPOC?:0/no 1/si");
	scanf("%d",&EPOC);
	printf("Tienes alguna enfermedad cardiovascular? :0/no 1/si");	
	scanf("%d",&cardio);
	printf("Tienes alguna enfermedad Lupus, o Cancer? :0/no 1/si");	
	scanf("%d",&inmune);
	
	//puntaje sexo
	
	puntaje=0;
	
	
	if (sexo==0){
			puntaje=puntaje+30;//mujer
	}else {
			puntaje=puntaje+50;//hombt}	
	}
	if(edad>=34 && edad<=45){//hombre
	puntaje=puntaje+50;
	}
	if((edad>=26 && edad<=34) ){
		puntaje=puntaje+30;//mujer}
	}
	if(edad<=25){
		puntaje=puntaje+10;
	}
	if(edad>=45 && edad<=59) {
		puntaje=puntaje+70;
	}
	if(peso==3 || peso ==1){
		puntaje=puntaje+70;
	}
	
	if(peso==2){
		puntaje=puntaje+40;
	}
	if(diabetes==1)
	{	puntaje=puntaje+100;
	
	}if (hipertension==1){
			puntaje=puntaje+100;
	}
	if (fumar==1){
			puntaje=puntaje+100;
	}
	if (EPOC==1){
			puntaje=puntaje+100;
	}if (cardio==1){
			puntaje=puntaje+100;
	} 
	if (peso==4){
		puntaje=puntaje+100;
	}
	if(inmune==1){
		puntaje=puntaje+150;
		}		
		
		printf("\n***********************\n");
	if(puntaje>=0 && puntaje<=139)	{
		
		
		printf("Nivel de Riesgo Medio\n");
	}	
	else if( puntaje>=140 && puntaje <=169){
		
			printf("Nivel de Riesgo Alto\n");
		
	}
	else if(puntaje>=170 && puntaje<=900){
			printf("Nivel de Riesgo muy ALTO\n");
	}
			printf("\n***********************\n");

	if(puntaje>=0 && puntaje<=139){
		printf("Factor de Riesgo 1");
		
	}
	if(puntaje>=149 && puntaje<=169){
		printf("Factor de Riesgo 2");
		
	}
	if(puntaje>=170 && puntaje<=200){
		printf("Factor de Riesgo 3");
		
	}
	if(puntaje>=201 && puntaje<=300){
		printf("Factor de Riesgo 4");
		
	}
	if(puntaje>=301 && puntaje<=400){
		printf("Factor de Riesgo 5");
		
	}
	if(puntaje>=401 && puntaje<=500){
		printf("Factor de Riesgo 6");
		
	}
	if(puntaje>=501 && puntaje<=600){
		printf("Factor de Riesgo 7");
		
	}
	if(puntaje>=601 && puntaje<=700){
		printf("Factor de Riesgo 8");
		
	}
	if(puntaje>=701 && puntaje<=800){
		printf("Factor de Riesgo 9");
		
	}
	if(puntaje>=801 && puntaje<=900){
		printf("Factor de Riesgo 10");
		
	}
	printf("\n***********************\n");
	printf("\n\nTu puntaje es : %d",puntaje);
	
				
	return 0;
}
