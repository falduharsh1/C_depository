#include<stdio.h>

int main (){
	
	int i,n;
	int arr[50];
	
	printf("please enter the size of array :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("please enter element :");
		scanf("%d",&arr[i]);
	}

	for(i=0; i<n; i++){
		if(arr[i] % 2 != 0){
			printf(" odd number is :%d\n",arr[i]);
		}
	}
	
	return 0;
}
