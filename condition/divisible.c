#include<stdio.h>

int main (){
	
	int number ;
	
	printf("please enter number :");
	scanf("%d",&number);
	
	if( number%5 == 0 ){
		printf("this number is divisible by 5 ");
	}else{
		printf("this number is not divisible by 5 ");
	}

	return 0;
}
