#include<stdio.h>

int main (){
	
	char cha;
	
	printf("please enter input :");
	scanf("%c",&cha);
	
	if ( (cha >= 'a' && cha <= 'z' ) || ( cha >= 'A' && cha <= 'Z') ){
		printf("alphabet");
	}else if( cha >= '0' && cha <= '9'){
		printf("digit");
	}else{
		printf("special symbol");
	}
	
	return 0;
}
