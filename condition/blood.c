#include<stdio.h>

int main (){
	int age, weight;
	
	printf("Please enter your age and weight: ");
	scanf("%d %d", &age, &weight);
	
	if (age >= 18) {
		if (weight >= 50) {
			printf("You are eligible for blood donation.");
		} else {
			printf("Your weight is under 50.");
		}
	} else {
		printf("Your age is under 18.");
	}

	return 0;	
}
