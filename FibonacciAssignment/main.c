#include <stdio.h>


int fib(int i);


int main(){
	int n;
	
	for(n=1;fib(n)<=1000;n++){
		printf("%d:%d¡¢",n,fib(n));
	}
	
	return 0;
}


int fib(int i){
	switch(i){
		case 1:
		case 2:{
			return 1;
		}
		
		default:{
			return fib(i-1)+fib(i-2);
		}
	}
}
