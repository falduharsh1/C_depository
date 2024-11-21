#include<stdio.h>

int main (){
	
	int i , num , sum , rem ,temp;
	
	printf("please enter number");
	scanf("%d",&num);
	
	temp = num;
	
	while(num != 0){
		rem = num % 10;
		sum = sum + (rem * rem * rem);
		num = num / 10;
	}
	
	if(sum == 0){
		printf("Armstrong number ");
	}else{
		printf(" Not Armstrong number ");
	}
	
	return 0;
}
