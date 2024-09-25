#include<stdio.h>

int main() {
    float weight, height, bmi,convert;

    printf("Enter your weight in kg: ");
    scanf("%f", &weight);

    printf("Enter your height in foots: ");
    scanf("%f", &height);
    height = height*0.3048;
    bmi = weight/(height*height);
    
    printf("Your BMI is %f\n",bmi);
    
    if (bmi < 29.9){
    	
    	if(bmi < 24.9){
    		
    		if(bmi < 18.5){
    		printf("You are Underweight");	
			}else{
    		printf("You are Normal weight");
			}
			
		}else{
			printf("You are Overweight");
		}
	}else if(bmi >= 30){
			printf("You are Obesive");
		
	}
    return 0;	
}
