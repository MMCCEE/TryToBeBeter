#include<stdio.h>
	int main(void){
		int Row=1;
		int n=0;
		int i=1;
		
		scanf("%d",&n);
		
		for(Row=1;Row<=(n-1)/2;Row++){		/*打印上半部分*/
			
			for(i=1;i<=(n-(Row*2-1))/2;i++){		/*打印每行开始的空格*/
				printf(" ");
			}
			
			for(i=1;i<=Row*2-1;i++){		/*打印每行的[*]*/
				printf("*");
			}
			
			for(i=1;i<=(n-(Row*2-1))/2;i++){		/*打印每行后段的空格*/
				printf(" ");
			}
			
			printf("\n");
			
		}
		
		for(i=1;i<=n;i++){		/*打印中间这一行*/
			printf("*");
		}
		printf("\n");
		
		for(Row=(n-1)/2;Row>=1;Row--){		/*打印下半部分*/

			for(i=1;i<=(n-(Row*2-1))/2;i++){		/*打印每行开始的空格*/
				printf(" ");
			}
			
			for(i=1;i<=Row*2-1;i++){		/*打印每行的[*]*/
				printf("*");
			}
			
			for(i=1;i<=(n-(Row*2-1))/2;i++){		/*打印每行后段的空格*/
				printf(" ");
			}
			
			printf("\n");
			
		}
		
		return 0;
	}
