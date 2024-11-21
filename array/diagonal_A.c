#include<stdio.h>

int main (){
	
	int arr[3][3] ={
	{10,20,30},
	{40,50,60},
	{70,80,90}
	};
	
	int i,j,sum=0;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(i==j){
				sum =sum+arr[i][j];
			}
		}
	}
	
	printf("answer is :%d",sum);
	
	return 0;
}
