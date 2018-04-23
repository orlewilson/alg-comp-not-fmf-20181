/*
Disciplina:	Algoritmos Computacionais 
            (Noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		18/04/2018
Descri��o:	Ler dois n�meros do tipo 
			inteiro e mostrar a soma
			entre eles 
*/

// Bibliotecas
// mostrar ou pegar informa��es no console
#include <stdio.h> 

// Programa Principal
int main()
{
	// declara��o das vari�veis
	int A, // n�mero inteiro 1
		B, // n�mero inteiro 2
		C; // somar os n�meros inteiros lidos
	
	// mostrar uma mensagem ao usu�rio
	// printf = escreva(), imprima()
	printf("Informe o primeiro numero: ");
	
	// ler um valor inteiro informado
	// pelo usu�rio
	// scanf() = leia()
	// %d = ler� um n�mero do tipo inteiro
	scanf("%d", &A);
	
	// mostrar uma mensagem ao usu�rio
	// printf = escreva(), imprima()
	printf("Informe o segundo numero: ");
	
	// ler um valor inteiro informado
	// pelo usu�rio
	// scanf() = leia()
	// %d = ler� um n�mero do tipo inteiro
	scanf("%d", &B);
	
	// somar dois n�meros
	C = A + B;
	
	// mostrar ao usu�rio o valor lido
	printf("A soma entre %d e %d e %d", A, B, C);
	
	return 0;	
}
