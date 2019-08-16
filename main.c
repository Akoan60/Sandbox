//Projet test qui permet de verifier different types de notions en C

#define _CRT_SECURE_NO_WARNINGS //Necessaire avec Visual Studio

#include <stdio.h>
#include <stdlib.h>

char sample[] = "two";
char target[100][100];

int main(int argc, char* argv())
{
	//Mexican wave
	//Each letter is successively capitalized to make a wave effect
	//Ex: "This is a wave" should give
	//		This is a wave
	//		tHis is a wave
	//		thIs is a wave
	//		thiS is a wave
	//		this Is a wave
	//		this iS a wave
	//		this is A wave
	//		this is a Wave
	//		... so on
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