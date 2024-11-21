#include<stdio.h>

int main (){
	
	int arr[50];
	int i,n,del_element;
	
	printf("please enter the size of array :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("please enter element :");
		scanf("%d",&arr[i]);
	}
	
	printf("please enter which element you like to delete :");
	scanf("%d",&del_element);
	
	n--;
	
	for(i=del_element; i<n; i++){
		arr[i]=arr[i+1];
	}
	
	for(i=0; i<n; i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
	
}
	
	
