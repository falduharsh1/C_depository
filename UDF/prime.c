//with retrun value , no parameter (type-3) :

#include<stdio.h>

int prime (){
	
	int i,n,harsh=0;
	
	printf("please enter number :");
	scanf("%d",&n);
	
	for(i=2; i<n/2; i++){
		if(n % i ==0){
			harsh=1;
			break;
		}
	}
	
	return harsh;
}

int main (){
	
	int ans;
	
	ans=prime();
	
	if(ans == 0){
		printf("prime number");
	}else{
		printf("not prime number");
	}
	
	return 0;
}
