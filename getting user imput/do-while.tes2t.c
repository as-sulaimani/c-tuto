



#include<stdio.h>
int main(){
	int a=10;
	printf("choisir un nombre: \n ");
	scanf("%d", &a);
	
	
	do{
	   printf("value of a: %d\n", a);
	   a = a +1;}
	while( a < 30);
	
	return 0;   
	
	   
	
}
