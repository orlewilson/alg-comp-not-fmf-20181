/*
Disciplina:	Algoritmos Computacionais 
            (matutino)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		16/05/2018
Descrição:	Ler N valores informado pelo usuário, 
			calcular soma e média
*/
// Bibliotecas
#include <stdio.h> 

// Programa Principal
int main()
{
	// variáveis
	int qtdValores, // quantidade de valores
		valor, 		// valor informado pelo usuário
		cont;		// auxiliar para ler os valores 
					// informados pelo usuário
	
	float soma, 	// soma dos N valores
		  media;	// média dos N valores
	
	printf("Informar quantidade de valor: ");
	scanf("%d", &qtdValores);

	// versã0 1.0 (usando while)
	cont = 1;
	soma = 0;
	
	while (cont <= qtdValores) { 
		// ler valor
		printf("Informe um valor: ");
		scanf("%d", &valor);
		// soma
		soma = soma + valor;  
		cont = cont + 1; 
	}
	
	// versã0 2.0 (usando for)
	/*soma = 0;
	
	for (cont = 1; cont <= qtdValores; cont++) { 
		// ler valor
		printf("Informe um valor: ");
		scanf("%d", &valor);
		// soma
		soma = soma + valor;  
	}*/
	
	media = soma / qtdValores;
	
	// mostrar resultado 
	printf("Soma dos valores: %.2f \n", soma);
	printf("Media dos valores: %.2f", media);
}
