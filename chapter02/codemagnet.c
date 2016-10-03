#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void print_reverse(char *s)
{
	size_t len = strlen(s);
	char *t = s + len - 1;		// points to last character of entered string word

	printf("%d\n",*s);
	printf("%d\n",*t);

	while (t >= s){				// pointer to t is > pointer to s...decrement condition
		printf("%c", *t);
		t = t - 1;				// decrement -1 and point to next reverse character
	}							// and repeat till pointer t matches pointer s
	puts("");
}

int main()
{
	char word[80];
	char toBeReversed[80];

	printf("Please enter a string to spell backwards: ");
	
	fgets(word,80,stdin);
	memcpy(toBeReversed,word,strlen(word)-1);

	print_reverse(toBeReversed);

	return 0;
}