#include<stdio.h>

int main (){
	
	int i , rem , sum=0 , n;
	
	printf("please enter the number :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		rem = n % 10;
		sum = sum + rem;
		n = n/10;
	}
	
	printf("your answer is :%d",sum);
	
	return 0;
}
