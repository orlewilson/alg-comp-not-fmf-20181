/*
Disciplina:	Algoritmos Computacionais 
            (Noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		18/04/2018
Descrição:	Ler um número inteiro e 
			mostrar ao usuário
*/

// Bibliotecas
// mostrar ou pegar informações no console
#include <stdio.h> 

// Programa Principal
int main()
{
	// declarar variável N do 
	// tipo inteiro
	int N;
	
	// mostrar uma mensagem ao usuário
	// printf = escreva(), imprima()
	printf("Informe um numero: ");
	
	// ler um valor inteiro informado
	// pelo usuário
	// scanf() = leia()
	// %d = lerá um número do tipo inteiro
	scanf("%d", &N);
	
	// mostrar ao usuário o valor lido
	printf("Voce informou: %d", N);
	
	return 0;	
}

