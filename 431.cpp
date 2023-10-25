#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i1,i2,j1,j2,s1,s2,n1,n2;
	for(i1=1;i1<=5;i1++){
		for(s1=4;s1>=i1;s1--){
			printf(" ");
		}
		for(j1=1;j1<=i1;j1++){
			printf("*");
		}
		for(n1=0;n1<i1-1;n1++){
			printf("*");
		}
		printf("\n");
	}
	for(i2=4;i2>=1;i2--){
		for(s2=1;s2<=5-i2;s2++){
			printf(" ");
		}
		for(j2=0;j2<i2;j2++){
			printf("*");
		}
		for(n2=0;n2<i2-1;n2++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
