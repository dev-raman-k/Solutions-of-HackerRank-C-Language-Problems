#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int num, *arr, i,j,sum=0;
	scanf("%d", &num);
	arr = (int*) malloc(num * sizeof(int));
	for(i = 0; i < num; i++) {
		scanf("%d", arr + i);
	}
	for(j=0; j<num; j++) {
		sum = sum+ *(arr + j);
	}
	printf("%d",sum);
	return 0;
}

