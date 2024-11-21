#include<stdio.h>

int main (){
	
	float  units ,bill , final_bill ;
	
	printf("enter unit that conjumed :");
	scanf("%f",&units);
	
	if( units > 0 && units <= 50){
		bill = units * 0.50 ;
	}else if (units > 50 && units <= 150){
		bill = 50 * 0.50 + (units - 50)* 0.75;
	}else if ( units > 150 && units <= 250){
		bill = 50 * 0.50 + 100 * 0.75 + (units - 150)*1.20;
	}else{
		bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250)*1.50;
	}
	
	final_bill = bill + bill* 0.20;
	
	printf("your final bill is %f :",final_bill);
	
	return 0;
}
