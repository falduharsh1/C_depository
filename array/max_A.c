#include<stdio.h>

int main (){
	
	int i,n,max;
	int arr[50];
	
	printf("please enter the size of array :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("please enter element :");
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++){
		if(arr[i] < max){
			arr[i]=max ;
		}
	}
	printf("max number is:%d",max);
	
	return 0;
}
