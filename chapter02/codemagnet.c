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
	printf("\n");
}

int main()
{
	char word[80];
	char toBeReversed[80];

	char *juices[] = {
		"dragonfruit", "waterberry", "sharonfruit", "uglifruit",
		"rumberry", "kiwifruit", "mulberry", "strawberry",
		"blueberry", "blackberry", "starfruit"
	};
	char a;

	char *names_for_dog[] = {"Bowser", "Bonza", "Ralph", "Snoopdog"};

	printf("Please enter a string to spell backwards: ");
	fgets(word,80,stdin);
	memcpy(toBeReversed,word,strlen(word)-1);
	print_reverse(toBeReversed);

/*
	puts(juices[6]);
	print_reverse(juices[7]);
	a = juices[2];
	juices[2] = juices[8];
	juices[8] = a;
	puts(juices[8]);
	print_reverse(juices[(18+7) / 5]);
	puts(juices[2]);
	print_reverse(juices[9]);
	juices[1] = juices[3];
	puts(juices[10]);
	print_reverse(juices[1]);
*/

	for(int i = 0; i <= strlen(names_for_dog); i++){
		printf("Dog %i: %s\n",i,names_for_dog[i]);
	}

	return 0;
}