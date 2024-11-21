#include<stdio.h>

int main (){
	
	int a,b;
	
	printf("please enter the value of a :");
	scanf("%d",&a);
	
	printf("please enter the value of b :");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("after swaping a value is %d :\n",a);
	printf("after swaping b value is %d :",b);
	
	return 0;
}
