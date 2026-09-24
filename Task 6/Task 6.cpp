#include <stdio.h>

int main() {

	int temperature,pressure;

	printf("\tAUTOMATIC FACTORY MACHINE DETECTOR\n");

	printf("Enter TEMPERATURE in Celcius: ");
	scanf("%d",&temperature);
	printf("Enter PRESSURE in PSI: ");
	scanf("%d",&pressure);

	if(temperature >100 || pressure > 250) {
		printf("Machine SHUTDOWN Automatically");
	}
	else if(85 <= temperature <=100 && 200 <= pressure <=250){
		printf("WARNING MODE");
	}
	else{
		printf("Machine Running");
	}

}