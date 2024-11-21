#include<stdio.h>

int len_str (char str[]){
	
	int i,count=0;
	
	for(i=0; str[i] != '\0'; i++){
		count++;
	}
	
	return count;
	
}

int main (){
	
	int ans;
	
	char str[50];
	
	printf("please enter string :");
	gets(str);
	
	ans=len_str(str);
	
	printf("number of string :%d",ans);
	
	return 0;
}
