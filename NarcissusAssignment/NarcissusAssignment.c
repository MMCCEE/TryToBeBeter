#include <stdio.h>
int main(){
	
	int Max=999;
	int i=100;
	
	for(i=100;i<=Max;i++){
		
		int a=i/100;int b=(i/10)%10;int c=i%10;
		
		if(a*a*a+b*b*b+c*c*c==i){
			printf("%d\n",i);
		}
			
	}
	
	return 0;
}




