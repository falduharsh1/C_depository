#include<stdio.h>

int main (){
	
	int arr[50];
	int i,n,sum=0,total;
	
	printf("please enter the size of array :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("please enter element :");
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++){
		sum=sum+arr[i];
	}
	
	total=sum/n;
	
	printf("your answer is :%d",total);
	return 0;
}
