//with return value , with parameter (typr-4) :

#include<stdio.h>

int add (int a,int b){
	int ans;
	ans=a+b;
	return ans; 
}

int sub (int a,int b){
	int ans;
	ans=a-b;
	return ans;
}

int mul (int a,int b){
	int ans;
	ans=a*b;
	return ans;
}

int div (int a,int b){
	int ans;
	ans=a/b;
	return ans;
}

int main (){
	
	int a,b,res;
	char op;
	
	printf("please enter a and b :");
	scanf("%d %d",&a,&b);
	
	printf("please enter operator :");
	scanf(" %c",&op);
	
	switch (op){
		case '+':
			res=add(a,b);
			break ;
			
		case '-':
			res=sub(a,b);
			break ;
			
		case '*':
			res=mul(a,b);
			break ;
			
		case '/':
			res=div(a,b);
			break ;
			
		default :
			printf("Eroor !");
			
	}
	
	printf("your answer is :%d",res);

	return 0;
}
