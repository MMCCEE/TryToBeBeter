#include <stdio.h>


int fib(int i);


int main(){
	int n;
	int res;
	
	for(n=1;(res=fib(n))<=1000;n++){
		printf("%d:%d¡¢",n,res);
	}
	
	return 0;
}


int fib(int i){
	if(i==1 || i==2){
		return 1;
	}
	return fib(i-1)+fib(i-2);
}
