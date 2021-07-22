/* Program to find the length of the string without built-in functions */
#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int main(void) {

	char *str = (char *)malloc(50 * sizeof(str));

	fgets(str,MAX,stdin);
	int i;
	for (i=0; str[i]!='\0'; ++i);
		printf("String length: %d\n",i);
	free(str);
	return 0;	

}
