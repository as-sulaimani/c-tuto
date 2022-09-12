#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , j , k , L ;
    printf("donner les lingnes "); //pour saisir le nombre des lignes
    scanf("%d",&L);
    for (i=1 ; i<=L ; i++){ //pour les lignes
        for ( j =1 ;j <= L-i ; j++){ //pour l'espace
            printf(" ");
        }
        for ( j = 1 ; j<= (2*i-1); j++){ //pour les **
            printf("*");

        }
        printf("\n");
    }
	return 0;
}



