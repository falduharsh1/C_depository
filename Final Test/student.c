#include<stdio.h>

int main (){
	
	int n,i,sub,rl,mark,m,sum;
	float pr;
	char grade;
	
	printf("how many students ?:");
	scanf("%d",&n);
	
	printf("how many subject they learn ?:");
	scanf("%d",&sub);
	
	for(i=0; i<1; i++){
		printf("what is your roll number ?:");
		scanf("%d",&rl);
	}
	
	for(i=0; i<sub; i++){
		printf("please enter your marks:");
		scanf("%d",&mark);
		
		sum=sum+mark;
		
		pr= sum*100/sub;
	}
	
	if(pr > 85 && pr < 100){
		grade = 'A';
	}else if(pr > 75 && pr < 85){
		grade = 'B';
	}else if(pr < 75){
		grade = 'C';
	}
	
	printf("your grade is :%c",grade);
	
	
	return 0;
}
