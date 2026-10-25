#include <stdio.h>
int main(void){
	int n=0;
	int i=0;
	int Sum=0;
	
	scanf("%d",&n);
	
	while(i<=n){
		Sum+=i;
		i++;
	}
	
	printf("1到%d的数字总和为:%d",n,Sum);
	
	return 0;
}
