#include<stdio.h>

int main (){
	
	int arr1 [3][3] = {
		{10,20,30},
		{40,50,60},
		{70,80,90}
	};
	
	int arr2 [3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	int i,j,ans[3][3] = {0};
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			ans[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
