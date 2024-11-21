#include<stdio.h>

int main (){
	
	int i,num,rem,rev,temp=0;
	
	printf("please enter the number :");
	scanf("%d",&num);
	
	temp=num;
	
	for(; num != 0;){
		rem= num % 10;
		rev= rem * 10 + num;
		num= num / 10;
	}
	
	printf("your reverse number is :%d",num);
	
	
	return 0;
}
