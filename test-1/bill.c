#include<stdio.h>

int main (){
	
	float units , bill , total_bill ;
	
	printf("please enter units that you conjumed :");
	scanf("%f",&units);
	
	if(units >= 0 && units <=50){
		bill = 50 * 0.50;
	}else if( units > 50 && units <= 150){
		bill = 50 * 0.50 + 	( units -50 ) * 0.75;
	}else if( units > 150 && units <= 250){
		bill = 50 * 0.50 + 100 * 0.75 + ( units -150) * 1.20;
	}else{
		bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + ( units -250 ) * 1.50;
	}
	
	total_bill = bill + bill * 0.20;
	
	printf("your final bill with surcharge is :%f",total_bill);
	
	
	return 0;
}
