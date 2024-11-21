#include<stdio.h>

int main(){
	
	int i , n , sum=0;
	
	printf("please enter number :");
	scanf("%d",&n);
	
	/*for(i=n; i>=1; i--){
		sum = sum + i;
	}*/
	
	i=n;
	while(i>=1){
		sum = sum + i;
		i--;
	}
	
	printf("your number is :%d",sum);
	return 0;
}
