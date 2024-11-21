#include<stdio.h>

int main (){
	
	int number;
	
	printf("enter number :");
	scanf("%d",&number);
	
	/*number >= 0 ? printf("Positive number") : printf("Negative number");*/
	
	if (number >= 0){
		printf("Positive number");
	} else {
		printf("Negative number");
	}
	
	return 0;
}
