#include <stdio.h>
int main(void){
	int i;
	
	for(i=1;i<=1000;i++){
		
		if(i%3!=0){
			continue;
		}
		
		if(i%5!=0){
			continue;
		}
		
		if(i%7!=0){
			continue;
		}
		
		if(i%9!=0){
			continue;
		}break;
		
	}
	
	printf("1到1000第一个能被3、5、7、9同时整除的数是：%d",i);
	
	return 0;
}
