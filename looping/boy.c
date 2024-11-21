#include<stdio.h>

int main (){
	
	int n , w , h , i , count=0;
	
	printf("how many boys ?");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		printf("please enter weight and height :");
		scanf("%d %d",&w , &h);
		
		if(w<50 && h>170){
			count++;	
		}
	}
	
	printf("your total boys that in your critaria is :%d",count);
	
	return 0;
}
