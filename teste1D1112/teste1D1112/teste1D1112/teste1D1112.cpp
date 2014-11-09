// teste1D1112.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#define MAX_LINE 200

int main(int argc, char* argv[])
{
	FILE *f;
	char l[MAX_LINE];
	char *c;
	bool flag = false;
	char *search = " ";
	int i;

	if (argc == 3 && strcmp(argv[0], "-b")) {
		f = fopen(argv[2], "r");
		while (fgets(l, MAX_LINE, f) != NULL) {
			if ((strcmp(l, "$$$ End Header\n") == 0) || (strcmp(l, "$$$ End Body\n") == 0)) {
				flag = !flag;
			}
			if (flag) {
				printf("%s", l);
			}
		}
		return 0;
	}

	if (argc == 4 && strcmp(argv[0], "-e")) {
		f = fopen(argv[3], "r");
		i = 0;
		while (fgets(l, MAX_LINE, f) != NULL) {
			if ((strcmp(l, "$$$ End Header\n") == 0) || (strcmp(l, "$$$ End Body\n") == 0)) {
				flag = !flag;
			}
			if (flag) {
				c = strtok(l, search);
				while (c != NULL) {
					if (strcmp(c, argv[2]) == 0) {
						i++;
					}
					c = strtok(NULL, search);
				}
			}
		}
		printf("Numero de palavras : %d", i);
		return 0;
	}

	return -1;
}

