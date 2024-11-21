#include<stdio.h>

int main (){
	
	int i , n , month_num , exp ,elec , sal , mark , total_exp=0;
	
	printf("how many month ? :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		total_exp=
		printf("please enter month number :");
		scanf("%d",&month_num);
	
		
		printf("please enter your expense of electricity, salary and marketing :");
		scanf("%d %d %d",&elec,&sal,&mark);
		
		total_exp = elec + sal + mark;
		
		printf("month number %d total expense is--> %d\n",month_num,total_exp );
	}
	
	return 0;
}
