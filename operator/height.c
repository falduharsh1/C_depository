#include<stdio.h>

int main (){
	
	float height;
	
	printf("enter your height in feet:");
	scanf("%f",&height);
	
	//height > 6.0 ? printf("you are taller") : printf("you are shorter");
	
	if(height > 6.0){
		printf("you are taller");
	}else{
		printf("you are shorter");
	}
	return 0;
}
