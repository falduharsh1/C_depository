#include<stdio.h>

int main (){
	
	char Gender;
	float bonus , salary ;
	
	printf("please enter your Gender (M/F) :");
	scanf("%c",&Gender);
	
	printf("please enter your salary :");
	scanf("%f",&salary);
	
	
	if (salary <= 10000) {
		if (Gender == 'm') {
			bonus = salary * 0.02;
		} else if (Gender == 'f') {
			bonus = salary * 0.03;
		} else {
			bonus = 0;
		}
	} else {
		bonus = 0;
	}


//	if(salary <= 10000 && Gender == 'm'){
//		bonus = salary * 0.02;
//	}else if(salary <= 10000 && Gender == 'f'){
//		bonus = salary * 0.03;
//	}else{
//		bonus = 0;
//	}
	
	
	printf("Bonus is: %f", bonus);
	
	
	
	
	
  return 0;	
}
