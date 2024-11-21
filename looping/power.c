#include<stdio.h>

int main (){
	
	int i , x , y , ans;
	
	printf("please enter the value of x and y :");
	scanf("%d %d",&x,&y);
	
	/*for(i=1; i<=y; i++){
		ans = ans * x;
	}*/
	
	i=1;
	while(i<=y){
		ans = ans * x;
		i++;
	}
	
	printf("your answer is :%d",ans);
	
	
	return 0;
}
