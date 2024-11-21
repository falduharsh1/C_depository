#include<stdio.h>

int main(){
	
	float c , F;
	
	printf("enter your tempreture in celsius :");
	scanf("%f",&c);
	
	F = 1.8*c + 32;
	
	printf("your Fahrenheit is :%f",F);
	
	return 0;
}
