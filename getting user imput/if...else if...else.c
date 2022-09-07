#include<stdio.h>

int main(){
	
	int a;
	printf("Enter a number: \n");
	scanf("%d", &a);
	if(a == 0){	
	        printf("%d est un nombre neutre.\n",a);
	}
	else if(a>0){
			printf("%d est un nombre positif.\n",a);
	}
	if(a<0)
	        printf("%d est un nombre negatif.\n",a);
	        
	     return 0;
		    
		
}
