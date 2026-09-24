#include <stdio.h>

int main() {

	int income;
	float cgpa;

	printf("\tSCHOLARSHIP AWARD\n");

	printf("Enter Your CGPA: ");
	scanf("%f",&cgpa);
	printf("\nEnter Your Family Income: ");
	scanf("%d",&income);

	if(cgpa >= 3.7 && income <= 50000) {
		printf("\nFULL SCHOLARSHIP");
	} 
	else if(cgpa >= 3.3 && income <= 100000) {
		printf("\nHALF SCHOLARSHIP");
	}
	else{
		printf("NO SCHOLARSHIP");
	}
}