/*
Disciplina:	Algoritmos Computacionais 
            (noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		24/05/2018
Descrição:	Ler 3 notas, calcular a média e 
			armazenar no vetor 
*/
// Bibliotecas
#include <stdio.h> 

// Programa Principal
int main()
{
	// variáveis
	float notas[3];
	
	// Lendo notas
	printf("Informe Nota 1: ");
	scanf("%f", &notas[0]);	

	printf("Informe Nota 2: ");
	scanf("%f", &notas[1]);
	
	printf("Informe Nota 3: ");
	scanf("%f", &notas[2]);
	
	// calculando a média
	notas[3] = notas[0]*0.3 + notas[1]*0.3
				+ notas[2]*0.4;
	
	// mostrando resultado
	printf("Media: %f", notas[3]);
}




