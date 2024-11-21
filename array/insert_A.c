#include<stdio.h>

int main (){
	
	int arr[50];
	int i,n,in_index,new_ele;
	
	printf("please enter the size of array :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("please enter element :");
		scanf("%d",&arr[i]);
	}
	
	printf("please enter insert index and new element :");
	scanf("%d %d",&in_index,&new_ele);
	
	n++;
	for(i=n-1; i>in_index; i--){
		arr[i]=arr[i-1];
	}
	
	arr[in_index]=new_ele;
	
	for(i=0; i<n; i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
