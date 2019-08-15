//Projet test qui permet de verifier different types de notions en C

#define _CRT_SECURE_NO_WARNINGS //Necessaire avec Visual Studio

#include <stdio.h>
#include <stdlib.h>

char sample[] = "two";
char target[100][100];

int main(int argc, char* argv())
{
	int j = 0;

	for (int i = 0; i < strlen(sample); i++)
	{
		for (int j = 0; j < strlen(sample); j++)
		{
			target[i][j] = sample[j];
		}
		target[i][i] = toupper(target[i][i]);
		printf("%s\n", target[i]);
	}

	return 0 ;
}