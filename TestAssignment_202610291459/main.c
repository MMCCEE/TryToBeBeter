#include <stdio.h>
int main(void){
	int i;
	int n;
	int Sum=0;
	int Fact=1;
	
	printf("请输入 n：");
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		Sum+=i;
		Fact*=i;
	}
	
	printf("1到%d的总和是：%d\n",n,Sum);
	printf("1到%d的阶乘是：%d",n,Fact);
	
	return 0;
}
