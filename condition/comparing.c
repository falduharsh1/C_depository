#include<stdio.h>

int main (){
	
	int x , y ;
	
	printf("enter value of x and y :");
	scanf("%d %d",&x ,&y);
	
	if(x > y){
		printf("%d is greter than %d",x , y);
	}else if( x < y){
		printf("%d is less than %d",x , y);
	}else{
		printf("%d is smae as %d",x , y);
	}
	
	
	
	return 0;
}
