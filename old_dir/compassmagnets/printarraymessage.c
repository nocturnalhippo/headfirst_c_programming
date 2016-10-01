#include <stdio.h>

void skip(char *msg)
{
	puts(msg+6);
}

void doses(int amount)
{
	int doses[] = {1,2,3,4,5,6,1000,5000};

	printf("Issue does %i\n", amount[doses]);
}

int main()
{
	char *msg_from_amy = "Don't call me";

	skip(msg_from_amy);

	doses(7);

	return 0;
}
