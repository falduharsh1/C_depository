#include<stdio.h>

int main (){
	
	char str[50];
	int i,n;
	
	printf("please enter string :");
	gets(str);

	n=strlen(str);
	
	for(i=0; i<n; i++){
		if(i<n-1){
			printf("%c-",str[i]);
		}else{
			printf("%c",str[i]);
		}
	}
	return 0;
}
