#include<stdio.h>

int main (){
	
	int arr[i];
	int i,n;
	
	printf("please enter the size of array :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("please enter element :");
		scanf("%d",&arr[i]);
	}
	
	printf("negetive elemet is :");
	for(i=0; i<n; i++){
		if(arr[i] < 0){
			printf("%d\n",arr[i]);	
		}
	}
	
	retrun 0;
}
