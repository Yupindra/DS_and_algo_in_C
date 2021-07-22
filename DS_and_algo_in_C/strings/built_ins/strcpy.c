/* Program to copy from source string to destination string variable*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char *str = (char *)malloc(50 * sizeof(char));
	
	char *str_1 = (char *)malloc(50 * sizeof(char));

	scanf("%[^\n]%*c",str);

	strcpy(str_1,str);
	
	printf("%s\n",str_1);

	free(str); free(str_1);
	return 0;
}
