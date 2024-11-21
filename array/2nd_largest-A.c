#include<stdio.h>

int main (){
	
	int arr[50];
	int i,n,m1=0,m2=0;
	
	printf("please enter the size of array :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("please enter element :");
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++){
		if(arr[i]>m1){
			m2=m1;
			m1=arr[i];
		}else if(arr[i] < m1 && arr[i] > m2){
			m2=arr[i];
		}
	}
	
	printf("largst number is :%d\n",m1);
	printf("2nd largest number is :%d",m2);
	
	
	return 0;
}
