// SerieExercicios1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX_PAL 20

int main(int arg, char* argv[]){
	char ficheiro[MAX_PAL];
	char ext[4];
	int i = 0;
	int x = 0;
	bool control = false;

	setlocale(LC_ALL, "Portuguese"); 
	printf("Introduza uma palavra:\n");
	scanf("%s", ficheiro);

	while (ficheiro[i] != '\0')
	{
		if (control == true)
		{
			printf("%c", ficheiro[i]);
		}
		if (ficheiro[i] == '.')
		{
			control = true;
		}
		i++;
	}
	printf("\n");
	system("pause");
	return 0;

	/////////////////////////////
	// EX2
	/////////////////////////////
	//char palavra1[MAX_PAL];
	//char palavra2[MAX_PAL];
	//int i;

	//setlocale(LC_ALL, "Portuguese"); 
	//printf("Introduza uma palavra:\n");
	//scanf("%s", palavra1);
	//printf("Introduza outra palavra:\n");
	//scanf("%s", palavra2);

	////Enquanto não chegarmos ao fim de uma das palavras avançamos
	////nas posições dos vectores
	//i = 0;
	//while ((palavra1[i] != '\0') && (palavra2[i] != '\0') &&
	//	((palavra1[i] == palavra2[i])))
	//	i++;

	////Se a última posição de ambos os vectores 
	////contiver o \0 então as palavras são iguais
	////senão são diferentes
	//if ((palavra1[i] == '\0') && (palavra2[i] == '\0'))
	//	printf("São iguais!\n");
	//else
	//	printf("São diferentes!\n");

	//system("pause");
	//return 0;
}
