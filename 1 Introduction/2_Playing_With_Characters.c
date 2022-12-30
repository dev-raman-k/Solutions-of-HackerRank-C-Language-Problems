#include <stdio.h>
#include <string.h>
int main() {
	char ch,s[100],sen[100];
	scanf("%c\n",&ch);
	scanf("%s\n",s);
	scanf("\n");
	scanf("%[^\n]s",sen); 
	/* generally scanf prints only one word , But by [^\n] it will print words until it reads new line or enter */
	printf("%c\n%s\n%s",ch,s,sen);
	return 0;
}

