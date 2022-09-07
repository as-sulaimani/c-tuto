#include<stdio.h>

int main(){
	int color;
	printf("choose a color:\n1-red.\n2-green.\n3-blue.\n");
	scanf("%d", &color);
	
	 switch (color){
	 	case 1:
	 		printf("you choose the red color.\n");
			break;
		case 2:
			printf("you choose the green color.\n");
			break;
		case 3:
			printf("you choose the blue one.\n");
			break;
		default:
			printf("whatever \n");
	
	 }
	 return 0;
	
}
