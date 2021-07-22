/*Program to reverse a string and store in the same string*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *strrev(char *str){

   if (!str || ! *str)
        return str;

	int i = strlen(str)-1, j=0;

	char ch;
	while(i>j) {

		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
		i--;
		j++;
	}
	return str;
}

int main(void) {

	char *str = (char *)malloc(50 * sizeof(char));

	scanf("%[^\n]%*c",str);

	printf("Reveresed string: %s\n",strrev(str));
	free(str);
	return 0;

}
