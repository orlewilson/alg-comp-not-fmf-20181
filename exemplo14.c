/*
Disciplina:	Algoritmos Computacionais 
            (noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		24/05/2018
Descrição:	Verificar se um número é par ou ímpar
*/
// Bibliotecas
#include <stdio.h> 

// declaração das funções
void parImpar(int num)
{
	if (num % 2 == 0)
	{
		printf("O numero %d e par!\n", num);	
	} else {
		printf("O numero %d e impar!\n", num);	
	}	
}
// Programa Principal
int main()
{
	parImpar(5);
	parImpar(4);
	parImpar(9);
	parImpar(11);
	parImpar(7);
	parImpar(6);
	
}






