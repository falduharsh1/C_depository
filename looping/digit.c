#include<stdio.h>

int main (){
	
	int n , i , count=0;
	
	printf("please enter number :");
	scanf("%d",&n);
	
	/*for(; n!= 0 ; ){
		n = n/10 ;
		count++;
	}*/
	
	while(n!= 0){
		n= n/10;
		count++;
	}
	
	printf("your number total digit is :%d",count);
	
	return 0;
}


