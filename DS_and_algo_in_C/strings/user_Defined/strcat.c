/* Program to concatenate two strings to one string */
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	char *str_1 = (char *)malloc(50 * sizeof(char));
	char *str_2 = (char *)malloc(50 * sizeof(char));

	scanf("%[^\n]%*c",str_1);
	scanf("%[^\n]%*c",str_2);

	char *str_3 = (char *)malloc(50 * sizeof(char));

	int i=0, j=0;

	while(str_1[i]!='\0'){
		str_3[j] = str_1[i];
		i++;j++;
	}	

	i=0;
	
	while(str_2[i]!='\0'){
		str_3[j] = str_2[i];
		i++; j++;
	}
	
	str_3[j] = '\0';

	printf("concatenated string: %s\n",str_3);
	free(str_1); free(str_2); free(str_3);
	
	return 0;
}
