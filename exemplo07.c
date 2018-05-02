/*
Disciplina:	Algoritmos Computacionais 
            (Noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		25/04/2018
Descrição:	Mostrar um valor 5 vezes
*/
// Bibliotecas
#include <stdio.h> 

// Programa Principal
int main()
{
	// declarando variáveis
	int A, B;
	
	A = 5;
	B = 0;	
	
	// while = enquanto
	printf("usando while \n");
	while (B < 5)
	{
		printf("%d \n", A);
		B = B + 1; // B += 1 ou B++			
	}
	// for = para
	printf("usando for \n");
	for (B = 0; B < 5; B = B + 1)
	{
		printf("%d \n", A);	
	}
		
	return 0;
}







