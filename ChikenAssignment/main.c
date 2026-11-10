#include <stdio.h>
int main(){
	int Cock=0;int Hen=0;int Chiken=0;
	int Cash=100000;
	int n=0;
	
	for(Cock=0;Cock<=20000;Cock++){
		
		for(Hen=0;Hen<=33333;Hen++){
			
			Chiken=(Cash-(5*Cock)-(3*Hen))*3;
			
			if(Cock+Hen+Chiken==100000){
				n++;
			}
			
		}
		
	}
	
	printf("%d\n",n);
	
	return 0;
}
