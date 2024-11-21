#include<stdio.h>

int main (){
	
	int arr[5]= {1,2,-3,-4,4};
	int i,n;
	
	for(i=0; i<n; i++){
		if(arr[i] < 0){
			printf("%d\n",arr[i]);	
		}
	}
	
	return 0;
}
