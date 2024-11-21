#include<stdio.h>

int main(){
	
	float area , base ,height;
	
	printf("please enter the base and height of triangle:");
	scanf("%f %f" ,&base,&height);
	
	area = 0.5 * base * height;
	
	printf("area of triangle is:%f",area);
	
	return 0;
}
