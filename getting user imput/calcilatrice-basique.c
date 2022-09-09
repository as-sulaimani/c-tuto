#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char Operator;
	int num1;
	int num2;
	int result=10;
	
		printf("Entrer le numero 1: ");
		scanf("%d", &num1);
	    printf("Entrer le numero 2: ");
	    scanf("%d", &num2);
	
	
switch(Operator)
  	{
  		case '+':
  			result = num1 + num2;
  			break;
  		case '-':
  			result = num1 - num2;
  			break;  			
  		case '*':
  			result = num1 * num2;
  			break;
  		case '/':
  			result = num1 / num2;
  			break;
		default:
			printf("\n tu as entere un operateur invalid ");				    			
	}
  
	printf("\n The result of %.2f %c %.2f  = %.2f", num1, Operator, num2, result);
	
    return 0;	
}

