#include<stdio.h>

int main (){
	
	char Gender;
	float bonus , salary ;
	
	printf("please enter your Gender (M/F) :");
	scanf("%c",&Gender);
	
	printf("please enter your salary :");
	scanf("%f",&salary);
	
	if ( Gender == 'm' && salary <= 10000){
		bonus = salary * 0.02;
	}else if ( Gender == 'f' && salary <= 10000){
		bonus = salary * 0.03;
	}
	
	printf("bonus is %f :",bonus);
	
	return 0;
}
