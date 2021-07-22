#include <stdio.h>

int strcmp(const char str1[], const char str2[]) {

	int i=0, flag=0;
	while(str1[i]!='\0' && str2[i]!='\0'){

		if(str1[i]!=str2[i]) 
			flag = 1;
			break;
	
		i++;
	}

	if(!flag)
		return 0; 

	return -1;
}


int main(void) {


	char str1[] = "Yupindra";
	char str2[] = "Yupindra";

	!strcmp(str1, str2) ? printf("strings are equal\n") : printf("strings are not equal\n");

	return 0;
}
