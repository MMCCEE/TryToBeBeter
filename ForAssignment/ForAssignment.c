#include<stdio.h>
int main(void){
	int n=0;
	int i=1;
	int fact=1;
	int sum=0;
	
    scanf("%d", &n);
	
	for (i = 1;i<=n;i++){
		fact*=i;
		sum+=fact;
	}
	
	printf("%d",sum);
	
	return 0;
}
