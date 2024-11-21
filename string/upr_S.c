#include<stdio.h>

int main (){
	
	char str[50];
	
	printf("please enter string :");
	gets(str);
	
	strupr(str);
	
	puts(str);
	
	return 0;
}
