#include <stdio.h>

int main() {

	int people;
	float weight;


	printf("\nEnter Total Combined Weight (MAX LIMIT 1000 Kgs): ");
	scanf("%f",&weight);
	printf("\nEnter Number Of People (MAX LIMIT 10 People): ");
	scanf("%d",&people);

	if(weight > 1000 || people > 10) {
		if(weight > 1000) {
			printf("\nEntry Denied\n'OVERWEIGHT'");
		} else {
			printf("\nEntry Denied\n'PEOPLE LIMIT EXCEEDED'");
		}
	} else {
		printf("\nElevator Normal Operate");
	}

}