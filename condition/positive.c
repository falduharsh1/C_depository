#include<stdio.h>

int main () {
	
	int number;
	
	printf("enter number :");
	scanf("%d",&number);
	
	if( number > 0){
		printf("positive number");
	} else if ( number < 0){
		printf("negative number");
	} else {
		printf("zero");
	}
	
	return 0;
}
