//with return value , with parameter (typr-4) :

#include<stdio.h>

int Armstrong (int num){
	
	int i,temp=0,sum=0,rem=0;
	
	temp=num;
	
	while(num != 0){
		rem = num % 10;
		sum = sum + (rem * rem * rem);
		num = num / 10;
	}
	
	if(sum == temp){
		return 0;
	}else{
		return 1;
	}
}

int main (){
	
	int ans;
	
	ans=Armstrong(153);
	
	if(ans == 0){
		printf("Armstrong number");
	}else{
		printf("Not Armstrong number");
	}
	
	return 0;
}
