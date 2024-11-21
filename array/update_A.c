#include<stdio.h>

int main (){
	
	int arr[50];
	int i,n,updateindex,newelement;
	
	printf("please enter the size of array :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("please enter element :");
		scanf("%d",&arr[i]);
	}
	
	printf("please enter the udate index and new element:");
	scanf("%d %d",&updateindex,&newelement);
	
	for(i=0; i<n; i++){
		arr[updateindex]=newelement;
	}
	
	for(i=0; i<n; i++){
		printf("%d",arr[i]);
	}
	
	return 0;
}
