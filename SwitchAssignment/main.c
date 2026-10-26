#include<stdio.h>
int main(void){
	int op,a,b;
	
	scanf("%d %d %d",&op,&a,&b);
	
	switch(op){
		case 1: printf("%d",a+b);break;
		
		case 2: printf("%d",a-b);break;
		
		case 3: printf("%d",a*b);break;
		
		case 4: case 5: switch(b){
			
			case 0: printf("error");break;
			
			default: switch(op){
				case 4: printf("%d",a/b);break;
				case 5: printf("%d",a%b);
			}
			
		}break;
		
		default: printf("error");
	}
	return 0;
}
