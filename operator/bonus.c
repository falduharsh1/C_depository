#include<stdio.h>

int main (){
	
	int salary ;
	
	printf("enter your salary :");
	scanf("%d",&salary);
	
	//bonus < 10000 ? printf("you are eligible for bonus") : printf("you are not eligible for bonus");
	
	if(salary < 10000){
		printf("you are eligible for bonus");
	}else {
		printf("you are not eligible for bonus");
	}
	return 0;
}
