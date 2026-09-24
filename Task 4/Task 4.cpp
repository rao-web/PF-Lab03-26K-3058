#include <stdio.h>

int main() {

	int status,credit_hours;
	float grade_point;

	printf("\tREGISTRATION FOR 'ADVANCED PROGRAMMING' COURSE\n");

	printf("Enter Your 'Programming Fundamentals' Status Pass/Fail (0/1): ");
	scanf("%d",&status);
	printf("\nEnter Your 'Programming Fundamentals' Grade Points: ");
	scanf("%f",&grade_point);
	printf("\nEnter Your 'Programming Fundamentals' Credit Hours: ");
	scanf("%d",&credit_hours);

	switch(status) {
		case 1:
			if(grade_point >= 2.5 && credit_hours >= 30) {
				printf("\nYou Are Eligible For Registration in Advanced Programming Course");
			} else {
				printf("\nYou Are Ineligible For Registration in Advanced Programming Course\nDOES NOT MEET MINIMUM REQUIRMENTS");
			}
			break;
		case 0:
			printf("Not Eligible For Registration Must Have Passed Programming Fundamentals With Minimum Requirments");
			break;
		default:
			printf("Invalid Entry");
	}
}