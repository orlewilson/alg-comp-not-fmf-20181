/*
Disciplina:	Algoritmos Computacionais 
            (noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		24/05/2018
Descri��o:	Calcular fatorial de um n�mero
			usando fun��o
*/
// Bibliotecas
#include <stdio.h> 

// declara��o das fun��es
int fatorial(int numero)
{
	// vari�veis locais
	int resultado, 	// resultado do fatorial
		cont;		// contador auxiliar
	
	// calculando o valor do fatorial
	resultado = 1;
	for (cont=1; cont <= numero; cont++)
	{
		resultado = resultado*cont;	
	}	
	
	// retornando o resultado do fatorial do
	// n�mero
	return resultado;
}


// Programa Principal
int main()
{
	// vari�veis
	int valor;		// n�mero lido 
		
	// lendo valor
	printf("Informe um valor: ");
	scanf("%d", &valor);
		
	// calcular fatorial e mostrar o resultado	
	printf("Fatorial de %d: %d", 
		valor, 
		fatorial(valor));
		
	return 0;
}






