#include<stdio.h>

int main (){
	
	int n;
	char str[50];
	
	printf("please enter string :");
	gets(str);
	
	n=strlen(str);
	
	printf("your string lengh is :%d",n);
	
	
	return 0;
}
