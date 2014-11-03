// Basename.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(int argc, char * argv[]){
	char * char_temp;
	char * temp;
	int z = 0;
	int i = 0;
	bool check = false;
	
	setlocale(LC_ALL, "Portuguese");
	temp = "";
	
	while (argv[1][i] != '\0'){
		if (argv[1][i] == '\\'){
			printf("Temp: %c \n", temp);
			printf("Char: %c \n", argv[1][i]);
			temp = "";
		}
		else{
			printf("else \n");
			z = (int)argv[1][i];
			printf("z = %i \n", z);
			char_temp = (char)z;
			printf("char_temp = %c \n", char_temp);
			strcat(temp, char_temp);
		}
		i++;
	}


	temp += '\0';
	return 0;
}