/*
Disciplina:	Algoritmos Computacionais 
            (Noturno)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		25/04/2018
Descri��o:	Conhecer os tipos de vari�veis
*/

// Bibliotecas
// mostrar ou pegar informa��es no console
#include <stdio.h> 
#include <stdbool.h> // valor booleano

// Programa Principal
int main()
{
	//declara��o das variaveis
	// inteiro
	int a; 				// -32.767 e 32.767
	unsigned  int b; 	// 0  a 65.535
	long int c;			// -2.147.483.647 a 
						// 2.147.483.647
	
	// real
	float d;			// 10e-38 a 10e38
						// 7 d�gitos precis�o
	double e;			// 10e-4932 a 10e4932
						// 15 d�gitos precis�o
	
	// boleano
	bool f;				// 0 (falso) ou 
						// 1 (verdadeiro)
	
	// caracter
	char g;				// entre aspas 
						// simples ('')
	
	// inicializar as vari�veis
	a = -345;
	b = 56;
	c = 235153135;
	
	d = 3.1415926;
	e = 3.141592653589793;
	
	f = 1;
	
	g = 'B';
	
	// mostrar os valores de cada vari�vel
	// \n = pular uma linha
	// %d = mostrar valor inteiro
	printf("valor de a: %d \n", a);
	printf("valor de b: %d \n", b);
	printf("valor de c: %d \n", c);
	
	// %f = mostrar valor real
	// %.3f = .3 indica o n�mero de 
	// casas decimais )nesse caso 
	// 3 casas decimais)
	printf("valor de d: %.3f \n", d);
	printf("valor de e: %.10f \n", e);
	
	printf("valor de f: %d \n", f);
	
	// %c = mostrar caracter
	printf("valor de g: %c \n", g);
	
	return 0;
}





