/*Program to concatenate two strings to one string*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

	char *str_1,*str_2,*str_3;
	str_1 = (char *)malloc(50 * sizeof(char));
	str_2 = (char *)malloc(50 * sizeof(char));
	str_3 = (char *)malloc(50 * sizeof(char));

	scanf("%[^\n]%*c %[^\n]%*c",str_1, str_2);

	strcat(str_3,str_1);
	strcat(str_3,str_2);

	printf("concatenated string: %s\n",str_3);

	free(str_1); free(str_2); free(str_3);
	return 0;
}
