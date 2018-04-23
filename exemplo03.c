/*
Disciplina:	Algoritmos Computacionais 
            (Noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		18/04/2018
Descrição:	Ler dois números do tipo 
			inteiro e mostrar a soma
			entre eles 
*/

// Bibliotecas
// mostrar ou pegar informações no console
#include <stdio.h> 

// Programa Principal
int main()
{
	// declaração das variáveis
	int A, // número inteiro 1
		B, // número inteiro 2
		C; // somar os números inteiros lidos
	
	// mostrar uma mensagem ao usuário
	// printf = escreva(), imprima()
	printf("Informe o primeiro numero: ");
	
	// ler um valor inteiro informado
	// pelo usuário
	// scanf() = leia()
	// %d = lerá um número do tipo inteiro
	scanf("%d", &A);
	
	// mostrar uma mensagem ao usuário
	// printf = escreva(), imprima()
	printf("Informe o segundo numero: ");
	
	// ler um valor inteiro informado
	// pelo usuário
	// scanf() = leia()
	// %d = lerá um número do tipo inteiro
	scanf("%d", &B);
	
	// somar dois números
	C = A + B;
	
	// mostrar ao usuário o valor lido
	printf("A soma entre %d e %d e %d", A, B, C);
	
	return 0;	
}
