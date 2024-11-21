#include<stdio.h>

int main (){
	
	float unit , bill , total_bill , surcharge;
	
	printf("please enter units that you conjumed :");
	scanf("%f",&unit);
	
	if(unit >= 0 && unit <= 50){
		bill = 50 * 0.50;
	}else if(unit > 50 && unit <=150){
		bill = 50 * 0.50 + (unit - 50)*0.75;
	}else if(unit > 150 && unit <=250){
		bill = 50 * 0.50 + 100 * 0.75 + (unit - 150)*1.20;
	}else if(unit > 250 ){
		bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250)*1.50;
	}else{
		printf("no found !");
	}
	
	surcharge = bill * 0.20;
	
	total_bill = bill + surcharge;
	
	printf("your total bill with surcharge is :%f",total_bill);
	
	
	return 0;
}
