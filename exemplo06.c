/*
Disciplina:	Algoritmos Computacionais 
            (Noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		25/04/2018
Descrição:	Ler dois valores reais e 
			e dividir o primeiro valor pelo
			segundo valor, sabendo que
			o segundo valor deve ser 
			diferente de zero
*/

// Bibliotecas
#include <stdio.h> 

// Programa Principal
int main()
{
	// declarar as variáveis 
	float a, // primeiro valor
		  b, // segundo valor
		  c; // armazenar o resultado da divisão

	printf("Informe o primeiro valor: ");
	scanf("%f", &a);
	
	printf("Informe o segundo valor: ");
	scanf("%f", &b);
	
	if (b != 0.0){
		c = a/b;
		printf("O resultado de %.2f/%.2f e: %.2f ", a, b, c);
	} else {
		printf("Nao ha divisao por zero");
	}
	
	return 0;
}








