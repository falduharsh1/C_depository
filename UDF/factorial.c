//No return value , No parameter (type-1) :

#include<stdio.h>

void factorial (){
	
	int i, fact=1 ,n;
	
	printf("please enter number:");
	scanf("%d",&n);
	
	for(i=n; i>=1; i--){
		fact = fact * i;
	}
	
	printf("your number factorial is :%d\n",fact);
}

int main (){
	
	factorial ();
	
	factorial ();
	
	factorial ();
	
	return 0;
}
