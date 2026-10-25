#include<stdio.h>
int main(void){
	int Score=0;
	int Level=0;
	
	scanf("%d",&Score);
	
	Level=Score/10; 
	
	switch(Level){
		case 10:
		case 9:
			printf("您的成绩等级为A");break;
		case 8:
			printf("您的成绩等级为B");break;
		case 7:
			printf("您的成绩等级为C");break;
		case 6:
			printf("您的成绩等级为D");break;
		default:
			printf("您的成绩等级为E");
	}
	
	return 0;
}
