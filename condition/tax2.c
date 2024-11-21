#include<stdio.h>

int main (){
	
	float net_income , tax , total;
	
	printf("please enter your net_income :");
	scanf("%f",&net_income);
	
	if(net_income >= 0 && net_income <= 10000){
		printf("you have not to pay any tax\n");
	}else if(net_income > 10000 && net_income <= 15000 ){
		tax = net_income * 0.1;
	}else if (net_income > 15000){
		tax = net_income * 0.15;
	}else{
		printf("invalid\n");
	}
	
	printf("your tax is :%f\n",tax);
	
	total = net_income - tax ;
	
	printf("your net_income after cuting tax is :%f",total);
	
	return 0;
}
