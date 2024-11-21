#include<stdio.h>

int main (){
	
	float cm , kg , BMI , m;
	
	printf("enter your height in cm :");
	scanf("%f",&cm);
	
	printf("enter your weight :");
	scanf("%f",&kg);
	
	m = cm/100;
	
	BMI = kg/(m * m);
	
	printf("your BMI is:%f",BMI);
	
	return 0;
}
