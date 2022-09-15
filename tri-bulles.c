#include<stdio.h>
#include<stdlib.h>
#define MAXE 50

// Le tri a bulles:
double t[MAXE];
int main(){

int i,j,n,tmp,ech;

printf("Donnez la dimension du tableau: ");
scanf("%d", &n);

// Remplissage:
for (i=0; i<n;i++){
	printf("Donnez l'element numero %d :", i+1);
	scanf("%lf", &t[i]);
}
//system("cls");

// Affichage avant le tri:
printf("\n\n\tAffichage avant de tri.\n\n");

for (i=0; i<n; i++)
printf("%7.2lf", t[i]);
 
//Affichage après le tri:
printf("\n\n\tAffichage apres de tri.\n\n");


do {

	ech= 0;
	for(i=0; i<n; i++){
		if(t[i]>t[i+1])
		{
			tmp    = t[i];
			t[i]   = t[i+1];
			t[i+1] =tmp;
			ech++;
			
		}
	}
}while (ech>0);
for(i=0; i<n; i++)
printf("%7.2lf",t[i]);


getch();
}
