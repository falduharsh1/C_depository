#include<stdio.h>

int main (){
	
	int cast;
	float CGPA;
	
	
	printf("please enter your cast (OPEN/OBC/SC/ST) :");
	scanf("%d",&cast);
	
	printf("please enter your CGPA :");
	scanf("%d",&CGPA);
	
	
	if(CGPA >= 9 && cast == open){
		printf("you are not eligible for scholarship");
	}else if(CGPA >= 9 && cast == OBC){
		printf("you will cliam 25% scholarship");
	}else if(CGPA >= 9 && cast == SC){
		printf("you will cliam 50% scholarship");
	}else if(CGPA >= 9 && cast == SC){
		printf("you will cliam 100% scholarship");
	}
	
	
	
	return 0;
}
