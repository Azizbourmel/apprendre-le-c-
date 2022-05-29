#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int taille_string=100;
    char date[taille_string];
    char nom[taille_string];
    char prenom[taille_string];
    char couleur[taille_string];
    //saiser utilisateur
    printf("saiser les informations suivantes\n");

    printf("\t la date de naissance jj/mm/aaaa \n");
    scanf("%s", date);

    printf("\t votre nom\n");
    scanf("%s", nom);

    printf("votre prenom\n");
    scanf("%s", prenom);

    printf("\t la coleur des yeux\n");
    scanf("%s", couleur);

    //affichage des information
    printf("vous appelez %s %s vous etes nes le %s vos yeux ont %s \n",nom, prenom, date, couleur);
     return 0;
}
