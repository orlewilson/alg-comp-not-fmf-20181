/*
Disciplina:	Algoritmos Computacionais 
            (matutino)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		16/05/2018
Descri��o:	Ler N valores informado pelo usu�rio, 
			calcular soma e m�dia
*/
// Bibliotecas
#include <stdio.h> 

// Programa Principal
int main()
{
	// vari�veis
	int qtdValores, // quantidade de valores
		valor, 		// valor informado pelo usu�rio
		cont;		// auxiliar para ler os valores 
					// informados pelo usu�rio
	
	float soma, 	// soma dos N valores
		  media;	// m�dia dos N valores
	
	printf("Informar quantidade de valor: ");
	scanf("%d", &qtdValores);

	// vers�0 1.0 (usando while)
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
	
	// vers�0 2.0 (usando for)
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
