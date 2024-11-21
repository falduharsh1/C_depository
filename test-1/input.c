#include<stdio.h>

int main (){
	
	char cha;
	
	printf("please enter input :");
	scanf("%c",&cha);
	
	if( cha >= 'A' && cha <='Z' || cha >= 'a' && cha <='z'){
		printf("this is alphabet :");
	}else if( cha >= '0' && cha <= '9'){
		printf("this is number :");
	}else{
		printf("this is special symbols :");
	}
	
	return 0;
}
