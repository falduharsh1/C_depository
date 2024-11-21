#include<stdio.h>

int main (){
	
	int arr[50];
	int i,n,temp;
	
	printf("please enter the size of array :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("please enter element :");
		scanf("%d",&arr[i]);
	}
	
	temp=arr[0];
	
	for(i=0; i<n; i++){
		arr[i]=arr[i+1];
	}
	
	arr[n-1]=temp;
	
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
	
}
