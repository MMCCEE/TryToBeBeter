#include <stdio.h>
int main(void){
	int i,j;
	int max=15;
	
	for(i=0;i<=max;i+=3){
		
		for(j=0;j<=i;j+=3){
			printf("[%d:%d]%c%-4d",i,j,'A'+i,15-j);
		}
		
		if(i<15){
			printf("\n===\n");
		}
	
	}
	
	return 0;
}
