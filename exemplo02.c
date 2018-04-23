/*
Disciplina:	Algoritmos Computacionais 
            (Noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		18/04/2018
Descri��o:	Ler um n�mero inteiro e 
			mostrar ao usu�rio
*/

// Bibliotecas
// mostrar ou pegar informa��es no console
#include <stdio.h> 

// Programa Principal
int main()
{
	// declarar vari�vel N do 
	// tipo inteiro
	int N;
	
	// mostrar uma mensagem ao usu�rio
	// printf = escreva(), imprima()
	printf("Informe um numero: ");
	
	// ler um valor inteiro informado
	// pelo usu�rio
	// scanf() = leia()
	// %d = ler� um n�mero do tipo inteiro
	scanf("%d", &N);
	
	// mostrar ao usu�rio o valor lido
	printf("Voce informou: %d", N);
	
	return 0;	
}

