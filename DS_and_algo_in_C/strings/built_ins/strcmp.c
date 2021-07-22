/* Program to compare two strings */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {

	char *name = (char *)malloc(50 * sizeof(char));

	char *name_2 = (char *)malloc(50 * sizeof(char));

	scanf("%[^\n]%*c %[^\n]%*c",name,name_2);

	if(!strcmp(name,name_2))
		printf("strings are equal\n");
	else
		printf("strings are unequal\n");
	free(name);
	free(name_2);

	return 0;
}
