#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
int main(void) {
	int i,j,s;
	for(i=1;i<=10;i++){
		for(j=1;j<=i;j++){
			printf("*");
			
	}
		printf("\n");
}
	printf("\n");
	for(i=10;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
			
	}
		printf("\n");
}
	printf("\n");	
	for(i=10;i>=1;i--){
		for(s=1;s<=10-i;s++){
			printf(" ");
	}
		for(j=1;j<=i;j++){
			printf("*");
			
	}
		printf("\n");
}
	printf("\n");	
	for(i=1;i<=10;i++){
		for(s=1;s<=10-i;s++){
			printf(" ");
	}
		for(j=1;j<=i;j++){
			printf("*"); 
			
	}
		printf("\n");
}
	return 0;
}
