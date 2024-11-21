#include<stdio.h>

int main (){
	
	int i,n,harsh=0;
	
	printf("please enter number :");
	scanf("%d",&n);
	
	for(i=2; i<n/2; i++){
		if(n % i == 0){
		harsh=1 ;
		break;
		}
	}
	
	if(harsh==0){
		printf("this is prime number");	
	}else{
		printf("this is not prime number");	
	}
	
	return 0;
}
