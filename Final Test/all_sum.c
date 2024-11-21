#include<stdio.h>

int add (int a , int b){
	int ans;
	ans=a+b;
	return ans;
}

int sub (int a , int b){
	int ans;
	ans=a-b;
	return ans;
}

int mul (int a , int b){
	int ans;
	ans=a*b;
	return ans;
}

int div (int a , int b){
	int ans;
	ans=a/b;
	return ans;
}

int main (){
	
	int a,b,res;
	char op;
	
	printf("please enter the value of x and y :");
	scanf("%d %d",&a,&b);
	
	printf("please enter the operator :");
	scanf(" %c",op);
	
	switch (op){
		case '+':
		res=add(a,b);
		break;
		
		case '-':
		res=add(a,b);
		break;
		
		case '*':
		res=add(a,b);
		break;
	
		case '/':
		res=add(a,b);
		break;
		
		default:
			printf("invalid\n");
			
	}
	
	printf("your result is :%d",res);
	
	return 0;
	
}



	
