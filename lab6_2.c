#include<stdio.h>
main(){
	int n, i;
	printf("enter a positive integer: ");
	scanf("%d", &n);
	for(i=2;i<=n;i++){
		if(n % i == 0){
			printf("%d is not a prime number", n);
			break;
		}
		else if(n % i !=0){
			printf("%d is a prime number", n);
			break;
		}
		    	
		
	}
	return 0;
}
