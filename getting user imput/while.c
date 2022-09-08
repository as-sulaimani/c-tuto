#include<stdio.h>

int main(){
	
	int Code;
	printf("Enter your code please:\t");
	scanf("%d", &Code);
	
	
	
     	 
	 while(Code != 1234){
	 	printf("Please verify!\n");
	 	printf("Enter your code please:\t");
		scanf("%d", &Code);
	 	
	}

     if(Code == 1234){
		printf("unlocked!\n");
	
	}
    return 0;

}

