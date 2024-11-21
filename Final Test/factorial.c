#include<stdio.h>

int main (){
	
	int i,n,fact=0;
	
	printf("please enter number :");
	scanf("%d",&n);
	
	for(i=1; i>=n; i--){
		fact = fact * i;
	}
	
	printf("your number factorial is : %d",fact);
	
	return 0;
}
