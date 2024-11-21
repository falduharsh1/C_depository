#include<stdio.h>

int main (){
	
	int amt;
	float dis;
	char type;
	
	printf("please enter your purchase amount :");
	scanf("%d",&amt);
	
	printf("which type of product you buy (m/h) :");
	scanf(" %c",&type);
	
	if(type == 'm' || type == 'M'){
		if(amt >= 0 && amt<= 100){
			dis=0;
		}else if(amt > 100 && amt <=200){
			dis=amt*0.05;
		}else if(amt > 200 && amt <=300){
			dis=amt*0.075;
		}else if(amt >300){
			dis=amt*0.10;
		}
		printf("your discount is :%f\n",dis);
	}
	
	if(type == 'h' || type == 'H'){
		if(amt >= 0 && amt<= 100){
			dis=amt*0.05;
		}else if(amt > 100 && amt <=200){
			dis=amt*0.075;
		}else if(amt > 200 && amt <=300){
			dis=amt*0.10;
		}else if(amt >300){
			dis=amt*0.15;
		}
		printf("your discount is :%f\n",dis);
	}
	return 0;
	}
	
