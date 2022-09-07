#include<stdio.h>

int main(){
	 int nombre;
	 printf("choisis un nombre de 1 à 7:\n");
	 scanf("%d", &nombre);
	switch (nombre){
		case 1:
			printf("lundi\n");
			break;
		case 2 :
		    printf("mardi\n");
			break;
		case 3 :
		    printf("mercredi\n");
			break;
		case 4 :
			printf("jeudi\n");
			break;
		case 5 :
			printf("vendredi\n");
			break;
		case 6 : 
			printf("samedi\n");
			break;
		case 7 :
			printf("dimanche\n");
			break;
			
		default:
			printf("choix invalide.\n");
			
			
	return 0;
				
		
		
		
		
		
		
		
		
		
	}
	
	
}
