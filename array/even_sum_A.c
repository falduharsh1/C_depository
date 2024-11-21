#include<stdio.h>

int main (){
	
	int arr[50];
	int i,n,sum=0;
	
	printf("please enter the size of array :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("please enter element :");
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++){
		if(arr[i] % 2 == 0){
			sum=sum+arr[i];
		}		
	}
	
	printf("your answer is :%d",sum);
	return 0;
}
