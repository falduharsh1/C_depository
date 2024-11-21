#include<stdio.h>

int main (){
	
	int i , n , sub , m , mark , j ,roll_nu ,sum=0;
	float per;
	
	printf("how many students ?");
	scanf("%d",&n);
	
	printf("how many subjects they learn ?");
	scanf("%d",&m);
	
	for(i=1; i<=n; i++){
		sum=0;
		
		printf("please enter your roll number :");
		scanf("%d",&roll_nu);
		
		for(j=1; j<=m; j++){
			
			printf("please enter your mark :");
			scanf("%d",&mark);
			
		 	sum = sum + mark;
		
		}
	
		per = (float)sum / m;
		
		printf("your percentage is :%f\n",per);
		
		if(per >= 85 && per <=100){
			printf("your grade is :A\n");
		}else if(per >= 75 && per <85){
			printf("your grade is :B\n");
		}else if(per >= 0 && per <75){
			printf("your grade is :C\n");	
		}else{
			printf("invalid");
		}
	}
	
	
	
	
	return 0;
}
