#include<stdio.h>

int main (){
	int a , b , c, d , max;
	
	printf("Enter four numbers: ");
	scanf("%d %d %d %d", &a, &b, &c , &d);
	
	if(a < b){
		if(a < c){
			if(a < d){
				printf("%d is minimum",a);
			}else{
				printf("%d is minimum",d);
			}
		}else{
			if(c < d){
				printf("%d is minimum",c);
			}else{
				printf("%d is minimum",d);
			}
		}
	}else{
		if(b < c){
			if(b < d){
				printf("%d is minimum",b);
			}else{
				printf("%d is minimum",d);
			}
		}else{
			if(c < d){
				printf("%d is minimum",c);
			}else{
				printf("%d is minimum",d);
			}
		}
	}
	
	
	return 0;
}
