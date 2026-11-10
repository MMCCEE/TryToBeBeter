#include <stdio.h>


int is_leap(int year); //I:年份 F:判断是否为闰年


int main(){
	int i;
	int printed=0;
	
	for(i=1926;i<=2026;i++){
		if(is_leap(i)){
			if(printed){
				putchar(',');
			}
			printf("%d",i);
			
			printed=1;
		}
	}
	puts(".");
	
	return 0;
}


int is_leap(int year){
	return year%400==0 || year%4==0 && year%100!=0;
}
