/*
Disciplina:	Algoritmos Computacionais 
            (Noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		25/04/2018
Descri��o:	Ler dois valores inteiros e 
			e mostrar qual o maior entre 
			eles
*/

// Bibliotecas
#include <stdio.h> 

// Programa Principal
int main()
{
	// declarar as vari�veis 
	int a, // primeiro valor
		b; // segundo valor

	printf("Informe o primeiro valor: ");
	scanf("%d", &a);
	
	printf("Informe o segundo valor: ");
	scanf("%d", &b);
	
	// condi��o
	// if = se
	// sen�o = else
	if (a > b){
		// se a condi��o for verdadeira
		printf("A > B : %d > %d", a, b);
	} else {
		// se a condi��o for falsa
		printf("B > A : %d > %d", b, a);
	}
	
	return 0;
}














