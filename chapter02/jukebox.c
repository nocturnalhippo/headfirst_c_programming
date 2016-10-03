#include <stdio.h>
#include <string.h>

/*
	strchr() - Find the location of a character inside a string
	strcmp() - Compare two strings
	strstr() - Find the location of a string inside another string - strstr("ronnie","ron")
	strcpy() - Copy one string to another
	strlen() - Find the length of a string
	strcat() - Concatenate two strings
*/

char tracks[][80] = {
	"I left my heart in Harvard Med School",
	"Newark, Newark - a wonderful town",
	"Dancing with Dork",
	"From here to maternity",
	"The girl from Iwo Jima",
};

void find_track(char search_for[])
{
	int i;

	for (i = 0; i < 5; i++){
		if (strstr(tracks[i],search_for))
			printf("Track %i: '%s'\n",i,tracks[i]);
	}
}

int main()
{
	char search_for[80];
	char new_search_for[80];
	int i;
	int len;

	printf("Search for: ");
	//scanf("%79s",search_for);
	fgets(search_for, 80, stdin);

	//len = strlen(search_for);
	//printf("\n%s is of length: %d\n",search_for,len);

	memcpy(new_search_for,search_for,strlen(search_for)-1);
	len = strlen(new_search_for);
	printf("\n%s is of length: %d\n",new_search_for,len);

	find_track(new_search_for);
	
	return 0;
}