#include<stdio.h>

int main (){
	
	int number ;
	
	printf("please enter number :");
	scanf("%d",&number);
	
	if( number%5 == 0 ){
		printf("%d is  divisible by 5 ");
	}else{
		printf("%d is not divisible by 5 ");
	}

	return 0;
}
