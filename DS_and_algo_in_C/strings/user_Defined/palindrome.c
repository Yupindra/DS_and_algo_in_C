#include <stdio.h>
#include <stdlib.h>
#define MAX 50


int strlent(char *str) {
	int i;
	for(i=0; str[i]!='\0'; ++i);
		return i;
}

int palindrome_check(char *str){
	int i,flag=0, n = strlent(str);

	for(i=0; i<n/2; i++){

		if(str[i]!=str[n-i-1]) {
			flag = 1;
			break;
		}

	}
	if(!flag)
		return 0;

	return -1;
}

int main(void)	{

	char *str = (char *)malloc(MAX * sizeof(char));

	scanf("%[^\n]%*c",str);

	if(!palindrome_check(str))
		printf("Palindrome\n");
	else
		printf("Not palindrome\n");	

	free(str);
	return 0;
}
