#include<stdio.h>

int findfact (int n){
	
	if(n>1){
		return n *findfact(n-1);
	}else{
		return 1;
	}
	
}

int main (){
	
	int n,ans;
	
	printf("please enter the number :");
	scanf("%d",&n);
	
	ans=findfact(n);
	
	printf("factorial is :%d",ans);
	
	return 0;
}
