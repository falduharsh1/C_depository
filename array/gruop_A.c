#include<stdio.h>

int main (){
	
	int arr[16]={85, 66, 37, 45, 68, 23, 99, 100, 81, 70, 42, 55, 68, 77, 96, 18};
	int i,index;
	int counter[11]={0};
	
	for(i=0; i<16; i++){
		index=arr[i]/10;
		counter[index]++;
	}
	
	for(i=0; i<10; i++){
		printf("%d - %d --> %d\n", i*10, i*10+9 , counter[i]);
	}
	
	printf("100 - 100 -->%d", counter[i]);
	return 0;
}
