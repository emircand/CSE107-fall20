#include<stdio.h>
main(){
	int a=0, b=1, next, i, n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("top %d terms: ", n);
	for(i=1;i<=n;i++){
		printf("%d ", a);
		next = a + b;
		a = b;
		b = next;
	}
}
