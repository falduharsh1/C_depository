#include<stdio.h>

int main (){
	
	int age , weight;
	
	printf("enter your age :");
	scanf("%d",&age);
	
	printf("enter your weight :");
	scanf("%d",&weight);
	
	if(age >= 18){
		if(weight >= 50){
			printf("you are eligible for blood donation");
		}
		else{
			printf(" sorry ,your weight is under 50");
		}
	}else{
		printf(" sorry ,your age is under 18");
	}
	
	return 0;
}
