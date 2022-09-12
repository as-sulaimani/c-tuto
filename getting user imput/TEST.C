#include<stdio.h>
#include<stdlib.h>
 int main (){
 	int a , b , c , n , L;
 	printf("Entrer un nombre: \n");          //pour saisir les lignes
 	scanf("%d", &L);

for(n=0; n<2; n++){




for (a=1; a<= L; a++){  //pour les lignes
	
	for (b = 1; b <= L - a + n ; b++){ //pour l'espace
		printf(" ");
	
	}
		
	for (b=1; b <=(2*a-1); b++){
		printf("*");
		
}
	    
	
		printf("\n");
	}
L++;

}
return 0;



 }
 
 
 
