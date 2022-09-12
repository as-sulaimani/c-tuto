#include<stdio.h>
#include<stdlib.h>


void basketballLegend(int rank, char name[], int points);
int main (){
	
	basketballLegend(1,"Kareem Abdul-Jabbar", 38387);
	basketballLegend(2,"LeBRON JAMES", 37062);	
	basketballLegend(1,"Karl Malone", 36928);

	return 0;
}







void basketballLegend(int rank, char name[], int points){
     	
     	printf("%d\t", rank);
     	printf("%s\t", name);
     	printf("%d point\n",points );



}
