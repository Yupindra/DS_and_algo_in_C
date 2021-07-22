#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *strrev(char *str) {
	char ch;
	int n = strlen(str);
	for (int i=0; i<n/2; i++){
		ch = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = ch;
	}

	return str;
}

int main(void) {


	char *str = (char *)malloc(50 * sizeof(char));
	
	scanf("%[^\n]%*c",str);

	printf("reversed string: %s\n", strrev(str));

	free(str);
	return 0;
}
