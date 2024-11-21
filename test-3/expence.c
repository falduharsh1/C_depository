#include<stdio.h>

int main (){
	
	int month_num, i, n, elec, sal, mark, total_exp=0;
	
	printf("how many month ?");
	scanf("%d",&n);
	
	for(i=1;i<=n; i++){
		total_exp=0;
		printf("please enter the month number :");
		scanf("%d", &month_num);
		
		printf("please enter the electricity, salary and marketing expense :");
		scanf("%d %d %d",&elec, &sal, &mark);
		
		total_exp = elec + sal + mark;
		
		printf("month number :%d , total expence is :%d\n:",month_num,total_exp);
		
	}
	
	return 0;
}
