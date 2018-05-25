/*
Disciplina:	Algoritmos Computacionais 
            (noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		24/05/2018
Descrição:	Calcular fatorial de um número
			usando função
*/
// Bibliotecas
#include <stdio.h> 

// declaração das funções
int fatorial(int numero)
{
	// variáveis locais
	int resultado, 	// resultado do fatorial
		cont;		// contador auxiliar
	
	// calculando o valor do fatorial
	resultado = 1;
	for (cont=1; cont <= numero; cont++)
	{
		resultado = resultado*cont;	
	}	
	
	// retornando o resultado do fatorial do
	// número
	return resultado;
}


// Programa Principal
int main()
{
	// variáveis
	int valor;		// número lido 
		
	// lendo valor
	printf("Informe um valor: ");
	scanf("%d", &valor);
		
	// calcular fatorial e mostrar o resultado	
	printf("Fatorial de %d: %d", 
		valor, 
		fatorial(valor));
		
	return 0;
}






