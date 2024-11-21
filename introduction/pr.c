#include<stdio.h>

int main(){
	
	float sub1 , sub2 , sub3 ,pr;
	
	printf("enter your three sub number:");
	scanf("%f %f %f", &sub1 , &sub2 , &sub3);
	
	 pr= (sub1 + sub2 + sub3)/3;
	 
	 printf("your pr is:%f",pr);
	
	return 0;
}
