#include <stdio.h>
#include <stdlib.h>

void go_south_east(int *lat, int *lon)	// *lat and *lon is storing the address of type int
{
	// this effectively reads:
	// get value at address of lat, +/- 1 to that value, and store it back into address !
	*lat = *lat - 1;
	*lon = *lon + 1;
}

void main(){

	int latitude = 32;
	int longitude = -64;

	// here, I'm pointing the address location of latitude and longitude values
	go_south_east(&latitude,&longitude);

	printf("Avast! Now at: [%i, %i]\n", latitude, longitude);

	// *(&latitude) and *(&longitude) will also work. Why?
	// I'm essentially dereferencing the pointer location!
	printf("Avast 2! Now at: [%i, %i]\n", *(&latitude), *(&longitude));
	return 0;
}
