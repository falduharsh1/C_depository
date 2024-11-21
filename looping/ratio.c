#include<stdio.h>

int main (){
	
	float a , b , c , d , i, ratio;	
	
	for(i=1; i<=3; i++){
		printf("please enter four number  :");
		scanf("%d %d %d %d",&a ,&b, &c, &d);
   
		
		if(c != d){
			ratio = (a-b) / (c-d);
			printf("ratio is %f\n",ratio);
		}	
	}

	return 0;
} 
