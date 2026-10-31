#include <stdio.h>
#include<math.h>
int main(void){
	int Q;
	
	scanf("%d",&Q);
	
	switch(Q){
		
		case 1:{
			printf("I love Luogu!");
		}break;
		
		case 2:{
			
			int Toltal=10;
			int A=2;
			int Uim=4;
			int B=Total-A-Uim;
			
			printf("%d %d",A+Uim,B);
			
		}break;
		
		case 3:{
			
			int Total=14;
			int Student=4;
			int Fridge=Total%Student;
			
			printf("%d\n",Total/Student);
			printf("%d\n",Total-Fridge);
			printf("%d\n",Fridge);
			
		}break;
		
		case 4:{
			
			double Coke=500.000000;
			int Student=3;
			double Portion=Coke/Student;
			
			printf("%f",Portion);
			
		}break;
		
		case 5:{
			
			int ALength=260;
			int BLength=220;
			int VA=12;
			int VB=20;
			
			int t=(ALength+BLength)/(VA+VB);
			
			printf("%d",t);
			
		}break;
		
		case 6:{
			
			int a=9;
			int b=6;
			
			double Diagonal=sqrt(a*a+b*b);
			
			printf("%f",Diagonal);
			
		}break;
		
		case 7:{
			int Cash=100;
			
			Cash+=10;
			
			printf("%d\n",Cash);
			
			Cash-=20;
			
			printf("%d\n",Cash);
			
			Cash=0
			
			printf("%d\n",Cash);
			
		}break;
		
		case 8:{
			
			const double PI=3.141593;
			
			int r=5
			
			printf("%d\n",2*PI*r);
			printf("%d\n",PI*r*r);
			printf("%d\n",(4/3)*PI*r*r*r);
			
		}break;
		
		case 9:{
			
			
			
		}
		
	}
}
