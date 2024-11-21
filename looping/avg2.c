#include<stdio.h>

int main(){
	
	int i , n , sum=0 ;
	float avg ;
	
	printf("please enter number :");
	scanf("%d",&n);
	
	for(i=n; i>=1; i--){
		sum = sum + i;
		
		avg = sum / n;
	}
	
	printf("your number is :%f",avg);
	return 0;
}
