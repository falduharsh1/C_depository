#include<stdio.h>

int main(){
	
	float meter , centimeter;
	
	printf("enter the value in meter :");
	scanf("%f", &meter);
	
	centimeter = meter * 100;
	
	printf("centimeter is %f", centimeter);
	
	return 0;
}
