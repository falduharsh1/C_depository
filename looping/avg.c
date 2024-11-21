#include<stdio.h>

int main(){
	
	int i , n , sum=0 , avg;
	
	printf("please enter number :");
	scanf("%d",&n);
	
	for(i=n; i>=1; i--){
		sum = sum + i;
	}
	
	avg= sum/n;
	
	printf("after addition your number is :%d",avg);
	return 0;
}
