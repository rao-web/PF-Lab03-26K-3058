#include <stdio.h>

int main() {

	int plan,minutes,extra_min = 0,extra_charge = 0,bill;

	printf("\tTELECOM PLANS\n");

	printf("Select Your Plan: ");
	scanf("%d",&plan);
	printf("\nEnter Minutes Used: ");
	scanf("%d",&minutes);

	switch(plan) {
		case 1:
			printf("\nYou Selected Plan 1\nTotal Minutes 1000\nPrice Rs.500\n");
			if(minutes > 1000) {
				extra_min = minutes - 1000;
				extra_charge = extra_min * 2;
			}
			bill = 500 + extra_charge;

			printf("\nExtra Minutes: %d",extra_min);
			printf("\nExtra Charges: Rs.%d",extra_charge);
			printf("\nTotal Bill: Rs.%d",bill);

			break;
		case 2:
			printf("\nYou Selected Plan 2\nTotal Minutes 2000\nPrice Rs.800\n");
			if(minutes > 2000) {
				extra_min = minutes - 2000;
				extra_charge = extra_min * 2;
			}
			bill = 800 + extra_charge;

			printf("\nExtra Minutes: %d",extra_min);
			printf("\nExtra Charges: Rs.%d",extra_charge);
			printf("\nTotal Bill: Rs.%d",bill);
			break;
		case 3:
			printf("\nYou Selected Plan 3\nUnlimited Minutes\nPrice Rs.1200\n");
			printf("\nTotal Bill: Rs.1200");
			break;
		case 4:
			printf("\nYou Selected Plan 4\nRate Appled 1/min");
			bill = minutes * 1;
			printf("\nMinutes: %d",minutes);
			printf("\nTotal Bill: Rs.%d",bill);
			break;
		default:
			printf("Invalid Selection");
	}
}