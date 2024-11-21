#include<stdio.h>

int main (){
	
	int fees;
	float sch , cgpa;
	char cast , grade;
	
	printf("please enter your fees :");
	scanf("%d",&fees);
	
	printf(" please enter your cast :\n");
	scanf(" %c",&cast);
	
	printf(" please enter your cgpa :");
	scanf(" %f",&cgpa);
	
	
	if(cgpa >= 9 && cgpa <= 10){
		grade = 'A';
	}else if(cgpa >= 8.5 && cgpa < 9){
		grade = 'B';
	}else if (cgpa >= 8 && cgpa < 8.5){
		grade = 'C';
	}else if (cgpa >= 7.5 && cgpa < 8){
		grade ='D';
	}else if (cgpa >=0 && cgpa < 7.5){
		grade = 'E';
	}else{
		printf("invalid\n");
	}
	
	if(grade == 'A' || grade == 'B'){
		if(cast == 'O'){
			sch = 0;
		}else if (cast == 'B'){
			sch = fees * 0.25;
		}else if (cast == 'S'){
			sch = fees * 0.50;
		}else if (cast == 'T'){
			sch = fees * 1;
		}
	}else{
		printf("you are not eligible for scholarship\n");
	}
	
	printf("your scholarship is :%f",sch);

	
	return 0;
}
