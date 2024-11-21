//No return value , with parameter (type-2) :

void digit (int n){
	
	int  i , count=0;
	
	while(n!= 0){
		n= n/10;
		count++;
	}
	
	printf("your number total digit is :%d\n",count);
	
}

int main (){
	
	digit(420);
	
	digit(95555);
	
	digit(5854135848);
	
	return 0;
}
