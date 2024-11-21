#include<stdio.h>

int main(){
	
	float celsius , fahrenheit ;
	
	printf("enter temprature in celsius :");
	scanf("%f",&celsius);
	
	 fahrenheit = 1.8 * celsius + 32;
	 
	 printf("temprature in fahrenheit is :%f\n\n ",fahrenheit);
	
	//fahrenheit > 105 ? printf("you are hot") : printf("you are not hot");
	
	if(fahrenheit > 105){
		printf("your temprature hot") ;
	}else{
		printf("your temprature not hot");
	}
	return 0;
}
