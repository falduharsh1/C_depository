#include<stdio.h>

int main (){
	
	int i,n,boys,w,h,count=0;
	
	printf("please enter the number of boys");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		printf("please enter your weight and height :");
		scanf("%d %d",&w,&h);
		
		if(w<50 && h>170){
			count++;
		}
		
	}
	
	printf("%d boys is in your criteriya",count);
	
	return 0;
}
