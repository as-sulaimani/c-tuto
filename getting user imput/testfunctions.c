#include<stdio.h>
#include<stdlib.h>
void sayHi (char yourName[50]);
int main(){
	char a[50];
	printf("what'sbyour name?\n");
	scanf("%s", &a);
	sayHi(a);
	return 0;
	
}
void sayHi (char yourName[50]){
	
	printf(" Hi %s", yourName);
}

