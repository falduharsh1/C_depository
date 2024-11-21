//with retrun value , no parameter (type-3) :

#include<stdio.h>

int area_rect(){
	
	int l,w,area;
	
	printf("please enter the length and width of rectangle :");
	scanf("%d %d",&l,&w);
	
	area=l*w;
	
	return area;
	
}

int main (){
	
	int ans;
	
	ans=area_rect();
	
	printf("area of rectangle is :%d",ans);
	
	return 0;
}
