#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n,i,t,j,m,k,l;
	scanf("%d", &n);
	t=2*n-1;
	for(i=0; i<(t/2) + 1; i++) {
		int m = n;
		for(j=0; j<=i; j++) {
			printf("%d ",m);
			m--;
		}
		for(k=1; k<t-2*i; k++)
			printf("%d ",n-i);

		m=n-i+1;
		for(l=0; l<i; l++) {
			printf("%d ",m);
			m++;
		}
		printf("\n");
	}
	for(i=(t/2)-1; i>=0; i--) {
		m=n;
		for(j=0; j<i; j++) {
			printf("%d ",m);
			m--;
		}
		for(k=0; k<t-2*i; k++) {
			printf("%d ",n-i);
		}
		m=n-i+1;
		for(l=0; l<i; l++) {
			printf("%d ",m);
			m++;
		}
		printf("\n");
	}
	return 0;
}
