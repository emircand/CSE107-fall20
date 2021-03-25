#include<stdio.h>

int main(){
	//formula : BMI = weight(kg)/height(m)2
	float a, b, c;
	printf("Please enter your weight(kg):");
	scanf("%f",&a);
	printf("Please enter your height(m):");
	scanf("%f",&b);
	
	 c= a/(b*b);
	if(c < 18.5){
		printf("Your bmi value is %f and you are underweight",c);
	}
	else if (c >= 18.5 && c < 25){
		printf("Your bmi value is %f and you are healthy weight",c);
	}
	else if (c >= 25 && c < 29){
		printf("Your bmi value is %f and you are overweight",c);
	}
	else if (c >= 30 && c < 34.9){
		printf("Your bmi value is %f and you are obese",c);
	}
	else if (c >= 35 && c < 39.9){
		printf("Your bmi value is %f and you are severely obese",c);
	}
	else if (c >= 40 && c < 49.9){
		printf("Your bmi value is %f and you are morbidly obese",c);
	}
	else if (c >= 50){
		printf("Your bmi value is %f and you are super obese",c);
	}
	
	return 0;
}
