#include <stdio.h>
#include <math.h>


int main(void){
	int Q;
	
	scanf("%d",&Q);
	
	switch(Q){
		
		case 1:{
			printf("I love Luogu!");
		}break;
		
		case 2:{
			
			int toltal=10;
			int A=2;
			int Uim=4;
			int B=toltal-A-Uim;
			
			printf("%d %d",A+Uim,B);
			
		}break;
		
		case 3:{
			
			int total=14;
			int student=4;
			int fridge=total%student;
			
			printf("%d\n",total/student);
			printf("%d\n",total-fridge);
			printf("%d\n",fridge);
			
		}break;
		
		case 4:{
			
			double coke=500.0;
			int student=3;
			double portion=coke/student;
			
			printf("%.6g",portion);
			
		}break;
		
		case 5:{
			
			int A_length=260;
			int B_length=220;
			int V_A=12;
			int V_B=20;
			
			int t=(A_length+B_length)/(V_A+V_B);
			
			printf("%d",t);
			
		}break;
		
		case 6:{
			
			int a=9;
			int b=6;
			
			double diagonal=sqrt(a*a+b*b);
			
			printf("%.6g",diagonal);
			
		}break;
		
		case 7:{
			int cash=100;
			
			cash+=10;
			
			printf("%d\n",cash);
			
			cash-=20;
			
			printf("%d\n",cash);
			
			cash=0;
			
			printf("%d\n",cash);
			
		}break;
		
		case 8:{
			
			const double PI=3.141593;
			
			int r=5;
			
			printf("%.6g\n",2*PI*r);
			printf("%.6g\n",PI*r*r);
			printf("%.6g\n",4.0/3*PI*r*r*r);
			
		}break;
		
		case 9:{
			
			int peach=1;
			int total=0;
			
			total=(peach+1)*2;
			total=(total+1)*2;
			total=(total+1)*2;
			
			printf("%d",total);
			
		}break;
		
		case 10:{
			
			double num_of_machine; num_of_machine=(30.0*8.0-30.0*(30.0*8.0-6.0*10.0)/(30.0-6.0))/10.0+(30.0*8.0-6.0*10.0)/(30.0-6.0);
			
			printf("%.6g",num_of_machine);
			
		}break;
		
		case 11:{
			
			int v_A=5;
			int v_B=8;
			int x=100;
			float t; t=(float)x/(v_B-v_A);
			printf("%.6g",t);
			
		}break;
		
		case 12:{
			
			int num_of_m='M'-'A'+1;
			printf("%d\n",num_of_m);
			char num_of_18; num_of_18='A'+18-1;
			printf("%c",num_of_18);
				
		}break;
		
		case 13:{
			
			const double PI=3.141593;
			int V_1=4.0/3*PI*4*4*4;
			int V_2=4.0/3*PI*10*10*10;
			double V_total=V_1+V_2;
			int edge_leng=cbrt(V_total);
			printf("%d",edge_leng);
			
		}break;
		
		case 14:{
			
			int cost=3500;
			int delta=(sqrt((10-110)*(10-110)-4*(3500-110*10))-(10-110))/(2*1);
			int price=110-delta;
			printf("%d",price);

		}
		
	}
	
	return 0;
}
