//No return value , with parameter (type-2) :

#include<stdio.h>

void circlearea (float r){
	float area;
	
	area = 3.14*r*r;
	
	printf("area of circle is :%f\n",area);
}

int main (){
	
	circlearea(5.8);
	
	circlearea(10.8);
	
	circlearea(8);
	
	return 0;
}
