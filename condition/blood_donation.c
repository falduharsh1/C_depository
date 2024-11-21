#include<stdio.h>

int main (){
	
	int age , weight;
	
	printf("please enter your age :");
	scanf("%d",&age);
	
	printf("please enter your weight :");
	scanf("%d",&weight);
	
	if(18 <= age){
		if(50 <= weight){
		printf("you are eligible for blood donation");	
		}
		else{
		printf("your weight is under 50.");
		}
	}else{
		printf("your age is under 18");
	}
	
	return 0;
}
