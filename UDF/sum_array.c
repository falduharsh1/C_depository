#include<stdio.h>

void sum_array (int arr[],int n){
	
	int i,sum=0;
	
	for(i=0; i<n; i++){
		sum=sum+arr[i];
	}
	
	printf("sum of array is :%d",sum);
	
}

int main (){
	
	int i,n,arr[50];
	
	printf("please enter the size of array :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("please enter the element :");
		scanf("%d",&arr[i]);	
	}
	
	sum_array(arr,n);
	
	return 0;
}
