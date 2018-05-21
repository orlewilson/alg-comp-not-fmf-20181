/*
Disciplina:	Algoritmos Computacionais 
            (Noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		16/05/2018
Descrição:	Ler 3 valores e mostrar soma 
			dos valores
*/
// Bibliotecas
#include <stdio.h> 

// Programa Principal
int main()
{
	// variáveis
	int a, b, c, soma;
	soma = 0;
	
	// Versão 1.0
/*	printf("Informe um valor: ");
	scanf("%d", &a);

	printf("Informe um valor: ");
	scanf("%d", &b);	
	
	printf("Informe um valor: ");
	scanf("%d", &c);
	
	// soma dos três valores
	soma = a + b + c;
	
	printf("Soma entre %d, %d e %d: %d ", 
	a, b, c, soma);
*/	
	// Versão 2.0
	/* int contador = 1;
	
	while (contador <= 3){
		printf("Informe um valor: ");
		scanf("%d", &a);
		
		soma = soma + a; 
		// soma += a;
		
		contador = contador + 1; 
		// contador += 1;
		// contador++;	
	}
	
	printf ("Valor da soma: %d", soma);	
	*/
	// Versão 3.0
	int contador;
	// para = for
	for (contador = 1; 
		 contador <= 4; 
		 contador = contador + 1){
		
			printf("Informe um valor: ");
			scanf("%d", &a);
		
			soma = soma + a; 
		 	
		 }
	printf ("Valor da soma: %d", soma);	

	
	return 0;
	
	
}









