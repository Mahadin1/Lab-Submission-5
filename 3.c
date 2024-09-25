#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter three numbers to know which is largest: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	
	if(a > b){
		if (a > c){
			printf("%d is the greatest number",a);
		}
	}else if(b > c){
		if(b > a){
			printf("%d is the greatest number",b);
		}
	}else if(c > b){
		if(c > a){
			printf("%d is the greatest number",b);
		}
	}
	

	
	return 0;
}
