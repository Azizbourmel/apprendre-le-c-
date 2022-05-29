#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	const int code_secret=1234;
	const int max_tentative=3;
	int saiser_utilisateur;
	int nb_tentative;
	for( nb_tentative=0;nb_tentative<max_tentative;nb_tentative++)
	printf("saiser votre code secret\n");
	scanf("%d",&saiser_utilisateur);
	if(saiser_utilisateur<0)
	{
		printf("le code doit etre superieur a 0\n");
	    continue;
	}
	if(saiser_utilisateur=code_secret)
	{
		printf("votre telephone est deverouilller\n");
		break;
	}
	else {
		printf("code incorrect\n");
	}
	return 0;
}
