#include<stdio.h>

int main (){
	
	char Gender;
	float bonus , salary , total_salary;
	
	printf("please enter your Gender (M/F) :");
	scanf(" %c",&Gender);
	
	printf("please enter your salary :");
	scanf("%f",&salary);
	
	/*switch (Gender){
		case 'M' :
		if(salary < 10000){
			bonus = salary * 0.02;
		}else{
			bonus = 0;
		}
		break ;
		case 'F' :
		if(salary < 10000){
			bonus = salary * 0.03;
		}else{
			bonus = 0;
		}
		break ;
		default :
		printf("invalid Gender\n");*/
		
		if ( salary >=0 && salary <= 10000){
			switch (Gender){
				case 'M' :
				case 'm' :
				bonus = salary * 0.02;
				break ;
				
				case 'F' :
				case 'f' :
				bonus = salary * 0.03;
				break ;
				
				total_salary = salary + bonus;
		
	        	printf("your final salary with bonus is :%f",total_salary);
				
				default :
				printf("invalid gender");
				break ;
				
				printf("your bonus is :%f\n",bonus);
				
			}
	   }
			
		else{
				printf("invalid salary");
			}
		
		
	
	return 0;
}
