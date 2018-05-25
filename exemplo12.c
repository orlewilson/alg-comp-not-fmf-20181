/*
Disciplina:	Algoritmos Computacionais 
            (noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		24/05/2018
Descrição:	Calcular fatorial de um número
			sem usar função
*/
// Bibliotecas
#include <stdio.h> 

// Programa Principal
int main()
{
	// variáveis
	int valor,		// número lido 
		resultado, 	// resultado do fatorial
		cont;		// contador auxiliar
		
		// lendo valor
		printf("Informe um valor: ");
		scanf("%d", &valor);
		
		// calcular fatorial
		resultado = 1;
		for (cont=1; cont <= valor; cont++)
		{
			resultado = resultado*cont;	
		}
		
		// mostrar resultado
		printf("Fatorial de %d: %d", valor, resultado);

		return 0;
	
}






