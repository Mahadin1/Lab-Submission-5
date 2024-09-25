#include<stdio.h>

int main(){
	int age;
	printf("Please enter your age to know if are eligible for Vote & also senior citizen: ");
	scanf("%d",&age);
	
	
	if(age < 0){
		printf("Invalid Age");
	}else if (age >= 18){
		if(age >= 60){
			printf("You are eligible for voting but also for senior Citizen");
		}else{
			printf("You are only eligible for Voting, not for Senior CitizenShip");
		}
	}else{
		printf("Not eligible");
	}
	
	
	return 0;
}
