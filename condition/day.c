#include<stdio.h>

int main (){
	
	char day ;
	
	printf("please enter first letter of day :");
	scanf("%c",&day);
	
	switch (day){
		case 'M' :
		printf("Monday");
		break ;
		
		case 'T' :
		printf("Tuseday");
		break ;
		
		case 'W' :
		printf("Wednesday");
		break ;
		
		case 't' :
		printf("thursday");
		break ;
		
		case 'F' :
		printf("Friday");
		break ;
		
		case 'S' :
		printf("Saturday");
		break ;
		
		case 's' :
		printf("sunday");
		break ;
		
		default :
		printf("invalid value");
		
	}
	
	
	return 0;
}
