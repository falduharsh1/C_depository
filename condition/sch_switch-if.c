#include<stdio.h>

int main (){
	
	int fees;
	float sch , cgpa;
	char cast , grade;
	
	printf("please enter your fees :");
	scanf("%d",&fees);
	
	printf("please enter your cast :");
	scanf(" %c",&cast);
	
	printf("please enter your cgpa :");
	scanf("%f",&cgpa);
	
    if(cgpa >= 9 && cgpa <= 10){
		grade = 'A';
	}else if(cgpa >= 8.5 && cgpa < 9){
		grade = 'B';
	}else if (cgpa >= 8 && cgpa < 8.5){
		grade = 'C';
	}else if (cgpa >= 7.5 && cgpa < 8){
		grade ='D';
	}else if (cgpa >=0 && cgpa < 7.5){
		grade = 'E';
	}else{
		grade = 'F';
		printf("invalid\n");
	}
	
	//	if(grade == 'A' || grade == 'B'){
		switch (grade) {
			case 'A':
			case 'B':
				
		 switch(cast){
		 	case 'O':
		 	case 'o':
		 		sch = 0;
		 		break ;
		 		
		 	case 'B':
		 	case 'b':
		 		sch = fees * 0.25;
		 		break ;
		 		
		 	case 'S':
		 	case 's':	
		 		sch = fees * 0.50;
		 		break ;
		 		
		 	case 'T':
		 	case 't':
		 		sch = fees * 1;
		 		break ;
		 		
		 	default :
		 		printf("invalid cast");
		 		break ;
		 }
		 printf("your scholarship is %f",sch);
		 default :
		 	sch = 0;
	}
			
		//	printf("your scholarship is :%f", sch);
		
	
	
	return 0;
	
}
