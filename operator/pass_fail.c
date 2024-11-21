#include<stdio.h>

int main (){
	
	float per;
	
	printf("enter your per :");
	scanf("%f",&per);
	
	//per > 34 ? printf("you are pass in exam") : printf("you are fail in exam") ;
	
	if(per > 34){
		printf("you are pass in exam");
	}else{
		printf("you are fail in exam");
	}
	
	return 0;
}
