#include<stdio.h>

int main(){

	int i, fact ,n;
	
	printf("please enter number:");
	scanf("%d",&n);
	
	for(i=n; i>=1; i--){
		fact = fact * i;
	}
	
	printf("your number factorial is %d",fact);
	
	return 0;
}
