#include<stdio.h>

int main (){
	
	float RS , HRA, DA, TA, ANS;
	
	printf("Enter your base salary :");
	scanf("%f",&RS);
	
   	 HRA = 0.1 * RS;
	 DA = 0.05 * RS;
     TA = 0.08 * RS;
	
	ANS = RS + HRA + DA + TA ;
	
	printf("Your total salary is %f:",ANS);
	
	
	return 0;
}
