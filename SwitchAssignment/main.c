#include<stdio.h>
int main(void){
	int op,a,b;
	
	scanf("%d %d %d",&op,&a,&b);
	
	switch(op){
		case 1: printf("%d",a+b);break;
		case 2: printf("%d",a-b);break;
		case 3: printf("%d",a*b);break;
		case 4: printf("%d",a/b);break;
		case 5: printf("%d",a%b);break;
		default: printf("erroor");
	}
	return 0;
}
