#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , j , k , L ;
    printf("donner les lingnes ");
    scanf("%d",&L);
    for (i=1 ; i<=L ; i++){
        for ( j =1 ;j <= L-i ; j++){
            printf(" ");
        }
        for ( j = 1 ; j <= (2i-1); j++){
            printf("");

        }
        printf("\n");
    }

return 0;
}



