#include <stdio.h>


int is_triangle(int a,int b,int c);


int main(){
	int x;int y;int z;
	
	scanf("%d %d %d",&x,&y,&z);
	
	if(is_triangle(x,y,z)){
		puts("T");
	}else{
		puts("F");
	}
	
	return 0;
}


int is_triangle(int a,int b,int c){
	return a+b>c && a+c>b && b+c>a;
}
