#include<stdio.h>

int main (){
	
	int n,i,harsh=0;
	
	printf("please enter any number :");
	scanf("%d",&n);
	
	for(i=2; i<=n/2; i++){
		if(n%i == 0){
			harsh=1;
			break;
		}
	}
	
	if(harsh == 0){
		printf("Prime Number");
	}else{
		printf("Not Prime Number");
	}
	
	
	return 0;
}
