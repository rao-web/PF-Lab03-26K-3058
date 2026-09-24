#include <stdio.h>

int main() {

	int member,city_limit,order_amount;


	printf("\tONLINE DELIEVERY\n");

	printf("\nEnter Your Order Amount: ");
	scanf("%d",&order_amount);
	printf("\nAre You Premium Member (0/1): ");
	scanf("%d",&member);
	printf("\nAre You Within City Limits (0/1): ");
	scanf("%d",&city_limit);

	if(member == 1 || order_amount >= 3000) {
		printf("\nYou Availed FREE DELIVERY");
	} else {
		printf("\nDelivery Charges Applied");
	}

	if(city_limit == 1 && order_amount <= 50000) {
		printf("\nCOD Available");
	} else {
		printf("\nNo COD Available");
	}
}