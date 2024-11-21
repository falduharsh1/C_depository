#include<stdio.h>

int main (){
	
	int x , y;
	
	printf("enter x value :");
	scanf("%d",&x);
	
	printf("enter y value :");
	scanf("%d",&y);	
	
	//(x>100) || (x != y) || (y < 50) ? printf("true statement\n\n") : printf("false statement\n\n");
	
	if((x>100) || (x != y) || (y < 50)){
		printf("true statement\n\n");
	}else{
		printf("false statement\n\n");
	}
	
////////////////////////////////////////////
	
	
	printf("enter x value :");
	scanf("%d",&x);
	
	printf("enter y value :");
	scanf("%d",&y);	
	
	//! (x == y && y < 10) ? printf("true statement") : printf("false statement");
	
	if(! (x == y && y < 10)){
		printf("true statement");
	} else{
		printf("false statement");
	}
	
	return 0;
}

