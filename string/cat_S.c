#include<stdio.h>

int main (){
	
	char str1[50],str2[50];
	
	printf("please enter string 1 :");
	gets(str1);
	
	printf("please enter string 2 :");
	gets(str2);
	
	strcat(str1,str2);
	
	puts(str1);
	
	return 0;
	
}
