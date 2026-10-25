#include<stdio.h>
int main(void){
	int Score=0;
	
	scanf("%d",&Score);
	
	Score=Score/10
	
	switch(Score){
		case 10:
			printf("您的成绩等级为A");break;
		case 9:
			printf("您的成绩等级为A");break;
		case 8:
			printf("您的成绩等级为B");break;
		case 7:
			printf("您的成绩等级为C");break;
		case 6:
			printf("您的成绩等级为D");break;
		default:
			printf("您的成绩等级为E") ;
	}
	
	return 0;
}
