#include<stdio.h>

int main(){
	int num;
	printf("Please enter a number to know, it is positive, negative, or Zero : ");
	scanf("%d",&num);
	
	if(num <= 0){
		if(num < 0){
			printf("Your number (%d) is negative.",num);
		}else {
			printf("Your number (%d) is Zero.",num);
		}
	}else{
		printf("Your number (%d) is Positive.",num);
	    
}
	return 0;
}
