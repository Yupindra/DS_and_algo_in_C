/* Program to find the length of a string */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char *str = (char *)malloc(50 * sizeof(char));

	scanf("%[^\n]%*c",str);

	printf("length of string: %ld\n",strlen(str));

	free(str);
	
	return 0;
}
