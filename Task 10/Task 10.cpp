#include <stdio.h>

int main() {

	int zone,speed,extra_speed = 0,base_fine=1000,fine;

	printf("\tTRAFFIC FINES\n");

	printf("Select The Zone (1/2/3): ");
	scanf("%d",&zone);
	printf("\nEnter Speed Of Driver: ");
	scanf("%d",&speed);

	switch(zone) {
		case 1:
			printf("\nYou Are In SCHOOL ZONE\nSpeed Limit: 30KM/H\n");
			if(speed > 30) {
				extra_speed = speed - 30;
				if(extra_speed > 20) {
					fine = base_fine * 2;
				} else {
					fine = base_fine;
				}
				printf("\nExceeded Speed: %dKM/H",extra_speed);
				printf("\nBase Fine: Rs.%d",base_fine);
				printf("\nTotal Fine: Rs.%d",fine);
			} else {
				printf("\nNo Fine");
			}
			break;
		case 2:
			printf("\nYou Are In HIGHWAY ZONE\nSpeed Limit: 100KM/H\n");
			if(speed > 100) {
				extra_speed = speed - 100;
				if(extra_speed > 20) {
					fine = base_fine * 2;
				} else {
					fine = base_fine;
				}
				printf("\nExceeded Speed: %dKM/H",extra_speed);
				printf("\nBase Fine: Rs.%d",base_fine);
				printf("\nTotal Fine: Rs.%d",fine);
			} else {
				printf("\nNo Fine");
			}
			break;
		case 3:
			printf("\nYou Are In RESIDENTIAL ZONE\nSpeed Limit: 50KM/H\n");
			if(speed > 50) {
				extra_speed = speed - 50;
				if(extra_speed > 20) {
					fine = base_fine * 2;
				} else {
					fine = base_fine;
				}
				printf("\nExceeded Speed: %dKM/H",extra_speed);
				printf("\nBase Fine: Rs.%d",base_fine);
				printf("\nTotal Fine: Rs.%d",fine);
			} else {
				printf("No Fine");
			}
			break;
		default:
			printf("Invalid Zone");
	}
	return 0;
}