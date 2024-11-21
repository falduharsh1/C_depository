//No return value , with parameter (type-2) :

#include<stdio.h>

void average (float a,float b,float c,float d){
	
	float avg;
	
	avg=(a+b+c+d)/4;
	
	printf("avegrage is :%f",avg);
}

int main (){
	
	average(5,8,6,9);
	
	return 0;
}
