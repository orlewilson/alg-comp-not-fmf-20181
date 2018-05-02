/*
Disciplina:	Algoritmos Computacionais 
            (Noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		25/04/2018
Descrição:	Ler dois valores inteiros e 
			e mostrar qual o maior entre 
			eles
*/

// Bibliotecas
#include <stdio.h> 

// Programa Principal
int main()
{
	// declarar as variáveis 
	int a, // primeiro valor
		b; // segundo valor

	printf("Informe o primeiro valor: ");
	scanf("%d", &a);
	
	printf("Informe o segundo valor: ");
	scanf("%d", &b);
	
	// condição
	// if = se
	// senão = else
	if (a > b){
		// se a condição for verdadeira
		printf("A > B : %d > %d", a, b);
	} else {
		// se a condição for falsa
		printf("B > A : %d > %d", b, a);
	}
	
	return 0;
}














