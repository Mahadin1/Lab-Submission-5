#include<stdio.h>

int main(){
	char sym;
	printf("Please enter only one character.\n");
	printf("Enter to know your character type : ");
	scanf("%c",&sym);
	
	if(sym < 0 && sym > 127){
		printf("Error invalid character not registered withing ASCII characters");
	}else{
	if(sym >= 97 && sym <= 122){
		printf("This is lowercase letter");
	}else if(sym >= 65 && sym <= 90){
		printf("This is Uppercase letter");
	}else if(sym >= 48 && sym <= 57){
		printf("This is a number");
	}else{
		printf("Special Character");
	}
	
	}
	
	
	
	return 0;
}
