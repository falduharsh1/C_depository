//No return value , No parameter (type-1) :

#include<stdio.h>

void odd_even (){
	
	int  num;
	
	printf("please enter number :");
	scanf("%d",&num);
	
	if(num % 2 == 0){
		printf("%d is even number",num);
	}else{
		printf("%d is odd number",num);
	}
}

int main (){
	
	odd_even();
	
	return 0;
}
