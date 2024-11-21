#include<stdio.h>

int main(){
	int first , second , third;
	
	printf("enter first number :");
	scanf("%d",&first);
	
	printf("enter second number :");
	scanf("%d",&second);
	
	third = first;
	
	first = second;
	
	second = third;
	
	printf("after swapping your first number is :%d\n",first);
	printf("after swapping your second number is :%d",second);
	
	
	return 0;
}
