#include<stdio.h>

int main(){

	int number;

	printf("enter number :");
	scanf("%d",&number);
	
	//number % 2 == 0 ? printf("Even number") : printf("Odd number");

	if(number % 2 == 0){
		printf("Even number");
	}else{
		 printf("Odd number");
	}


	return 0;
}
