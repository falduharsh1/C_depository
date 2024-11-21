#include<stdio.h>

int main (){
	
	int arr[50];
	int i,n,j,temp;
	
	printf("please enter the size of array :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("please enter element :");
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("ascending number is :");
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}

	return 0;	
}
