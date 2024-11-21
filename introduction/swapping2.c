#include<stdio.h>

int main(){
	
	int first /*(10)*/ , second /*(15)*/ ;
	
	printf("enter first number :");
	scanf("%d",&first);
	
	printf("enter second number :");
	scanf("%d",&second);
	
	first = first + second ; //(25)
	
	second = first - second ; //(10)
	
	first = first - second ; //(15)
	
	
	printf("after swapping without using third variable first number is :%d\n",first);
	printf("after swapping without using third variable second number is :%d",second);
	
	return 0;
}
