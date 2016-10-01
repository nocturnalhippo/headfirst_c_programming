#include <stdio.h>

int main()
{
	int contestants[] = {1,2,3};
	int *choice = contestants;

	contestants[0] = 2;			// {2,2,3}
	contestants[1] = contestants[2];	// {2,3,3}
	contestants[2] = *choice;		// contestants[2] stores the address to the pointer
						// of first array value address...thus, 2!

	printf("The choice variable contains: %i\n", *choice);
	printf("I'm going to pick contestant number %i\n", contestants[2]);

	return 0;
}
