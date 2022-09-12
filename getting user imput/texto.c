#include<stdio.h>
#include<stdlib.h>
 int main (){
 	int a , b , c , n , L;
 	printf("Entrer un nombre: \n");          //pour saisir les lignes
 	scanf("%d", &L);

for (a=1; a<= L; a++){  //pour les lignes
	
	for (b = 1; b <= L - a; b++){ //pour l'espace
		printf(" ");
	
	}
		
	for (b=1; b <=(2*a-1); b++){
		printf("*");
		
}
	    
	
		printf("\n");
	}


return 0;



 }
 
 
 
