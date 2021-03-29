#include <stdio.h>
int main(){
int i,h,n,k;
printf("enter a height for pyramid:");
scanf("%d",&h);
for(i=1;i<=h;i++){
	for(k=1;k<=h-i;k++){
		printf(" ");
	}
	for(n=1;n<=2*i-1;n++){
		printf("*");
	}
printf("\n");	
}
return 0;
}

