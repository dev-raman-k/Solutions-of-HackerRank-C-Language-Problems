#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

	char *s;
	int i,j;
	s = malloc(1024 * sizeof(char));
	scanf("%[^\n]", s);
	s = realloc(s, strlen(s) + 1);
	int arr[10];
	for( i=0; i<10; i++) {
		arr[i]=0;
		char c = (char)i+48;
		for(j=0; j<strlen(s); j++) {
			if(s[j]==c)
				arr[i] = arr[i] + 1;
		}
	}
	for(i=0; i<10; i++)
		printf("%d ",arr[i]);
	return 0;
}

