#include <stdio.h>
#include <stdlib.h>

void go_south_east(int *lat, int *lon)
{
	*lat = *lat - 1;
	*lon = *lon + 1;
}

int main()
{
	int latitude = 32;
	int longitude = -64;

	int age;
	int *address_of_age = &age;

	go_south_east(&latitude,&longitude);
	printf("Avast! Now at: [%i, %i]\n", latitude, longitude);

	printf("The memory address of latitude is: [%p]\n", &latitude);
	printf("The memory address of longitude is: [%p]\n", &longitude);

	printf("Please enter your age: ");
	scanf("%i", &age);

	printf("You entered: %i\n",age);
	printf("You entered: %i\n",*address_of_age);

	

	return 0;
}