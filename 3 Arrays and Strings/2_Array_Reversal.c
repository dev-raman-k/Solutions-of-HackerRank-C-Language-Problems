#include<stdio.h>
int main() {
	int s,i,temp;
	scanf("%d",&s);
	int a[s];
	for(i=0; i<s; i++)
		scanf("%d",&a[i]);

	for(i=0; i<s/2; i++) {
		temp = a[i];
		a[i] = a[s-i-1];
		a[s-i-1] = temp;
	}

	for(i=0; i<s; i++)
		printf("%d ",a[i]);
	return 0;
}
