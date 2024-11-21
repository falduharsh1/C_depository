#include<stdio.h>

int main (){
	
	int salary ,total , tax;
	
	printf("please enter your salary :");
	scanf("%d",&salary);
	
	if(salary >=0 && salary <=2000){
		printf("you have no tax deducation");
	}else if(salary > 2000 && salary <= 4000){
		tax = salary * 0.03;
	}else if(salary > 4000 && salary <= 5000){
		tax = salary * 0.05;
	}else if(salary > 5000){
		tax = salary * 0.08;
	}else{
		printf("enter salary in positive value\n");
	}
	
	printf("your tax is :%d\n",tax);
	
	total = salary - tax ;
	
	printf("your final salary with tax is :%d ",total);
	
	return 0;
}

