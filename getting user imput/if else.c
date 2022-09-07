#include<stdio.h>

int main(){
	
		int PIN;
		printf("Enter PIN: \t ");
		
		scanf("%d", &PIN);
		
		if(PIN == 1234) {
		printf("Unlocked!\n");
		}else{
			printf("Please verify your PIN.\n");
		}	
		
		return 0;
	
}
