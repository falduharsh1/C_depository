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
	
	temp=arr[n-1];
	
	for(i=n-1; i>=0; i--){
		arr[i]=arr[i-1];
	}
	
	arr[0]=temp;
	
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	
	
	
	
	
	return 0;
}
