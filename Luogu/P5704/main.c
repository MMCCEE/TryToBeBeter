#include <stdio.h>
int main(void){
	char ch;
	
	scanf("%c",&ch);
	
	ch-='a'-'A';
	
	printf("%c",ch);
	
	return 0;
}
