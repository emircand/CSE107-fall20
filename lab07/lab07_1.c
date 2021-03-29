#include<stdio.h>

int main(){
	int i,j,number;
	printf("enter a height for triangle:");
	scanf("%d",&number);
	for(i=0;i<number;i++){
		for(j=0;j<i+1;j++){
			printf("*");
		}
	printf("\n");	
	}
	return 0;
}
