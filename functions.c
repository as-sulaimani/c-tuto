#include<stdio.h>
#include<stdlib.h>
int main(){
	float T [318];
	int i;
	float S, M;
for (i=0; i<318;i++){
printf("donner la note de l'etudiant num %d ", i+1);
scanf("%f", &T[i]);


}


S= 0;
for(i=0; i<318; i++)
	S = S + T[i];


M= S/318;

return 0;}


