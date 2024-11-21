#include<stdio.h>

int main (){
	
	int salary , HRA , DA , TA , ANS;
	
	printf("enter your salary :");
	scanf("%d",&salary);
	
	HRA = salary * 0.10;
	DA = salary * 0.05;
	TA = salary * 0.08;
	
	ANS = salary + HRA + DA + TA ;
	
	printf("your final salary is %d ",ANS);
	
	return 0;
}
