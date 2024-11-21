#include<stdio.h>

int main (){
	
	int n,rem,rev,temp;
	
	printf("please enter any number :");
	scanf("%d",&n);
	
	temp=n;
	
	for(; n!= 0;){
		rem= n % 10;
		rev= rev * 10 + rem;
		n = n / 10;
	}
	
	printf("your reverse number is :%d\n",rev);
	
	if(temp=n){
		printf("palindrome number");
	}else{
		printf("Not palindrome number");
	}
	
	return 0;
}


