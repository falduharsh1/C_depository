#include<stdio.h>

int main (){
	
	int a , b , c , d , i;
	float ratio;
	
	for(i=1; i<=3; i++){
		printf("please enter a , b , c ,d :");
		scanf("%d %d %d %d",&a , &b , &c , &d);
		
		if(c!=d){
			ratio = (float) (a-b)/(c-d);
			printf("your ratio is :%f\n",ratio);
		}
	}
	
	return 0;
}
