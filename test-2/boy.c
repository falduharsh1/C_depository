#include<stdio.h>

int main(){
	
	int i , num  , w , h , count=0 ;
	
	printf("how many boys :");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		printf("please enter your weight and height :");
		scanf("%d %d",&w , &h);
		
		if(w<50 && h>170){
			count++;
		}
	}
		printf("%d boys are in your criteriya :",count);
		
	
	return 0;
}
