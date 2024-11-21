#include<stdio.h>

int main () {
	
	int number;
	
	printf("enter number :");
	scanf("%d",&number);
	
	/*number >= 100 ? printf("True statement") : printf("False statement");*/
	
	if(number >= 100){
		printf("True statement");
	}else{
		printf("False statement");
	}
	
	return 0;
}
