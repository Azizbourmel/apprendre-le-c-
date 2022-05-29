#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int rayon=0;
	int diametre=0;
	int hauteur=0;
	float cerfirance=0,aire=0.0;
     printf("donnez le rayon de cercle: *");
     scanf("%d",&rayon);
     diametre=2*rayon;
     cerfirance=M_PI*(float)diametre;
     aire=M_PI*pow(rayon,2);
     printf("diamete=%d\n",diametre);
     printf("cerfirance=%f\n",cerfirance);
     printf("aire=%f\n",aire);
     printf("donnez la hauteur\n");
     scanf("%d",&hauteur);
     
	return 0;
}
