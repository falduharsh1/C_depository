#include <stdio.h>

int main (){
	
	int amt ;
	float dis ;
	char type ;
	
	printf("please enter yout purchase amount and type :");
	scanf("%d %c",&amt, &type);
	
   		if(type == 'M' || type == 'm'){
		   
    		if(amt > 0 && amt <= 100){
    			dis = 0;
			}else if(amt >= 101 && amt <= 200){
				dis = amt * 0.05;
			}else if(amt >= 201 && amt <= 300){
				dis = amt * 0.075;
			}else if(amt < 300){
				dis = amt * 0.10;
			}
			printf("your discount is %f",dis);
		}
		
		if(type == 'H' || type == 'h'){
    		if(amt > 0 && amt <= 100){
    			dis = amt * 0.05;
			}else if(amt >= 101 && amt <= 200){
				dis = amt * 0.075;
			}else if(amt >= 201 && amt <= 300){
				dis = amt * 0.10;
			}else if(amt < 300){
				dis = amt * 0.15;
			}printf("your discount is %f",dis);		
		}
	
	return 0;	
}
