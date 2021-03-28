#include<stdio.h>
main(){
	int n, sum=0, i;
	printf("Enter an integer: ");
	scanf("%d", &n);
	for(i=1;i<n;i++){
		if(n % i == 0){
		sum = sum+i;
		}
	}
	if(n == sum){
		printf("%d is a perfect number", n);
	}
	else{
		printf("%d is not a perfect number", n);
	}		
	
return 0;	
}
