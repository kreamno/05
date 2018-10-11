#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number;
	
	printf("input an integer:");
	scanf("%d",&number);
	
	
	if(number>0)
	{
		printf("양수입니다.\n");
	}
		
	else if(number==0)
	{
		printf("0입니다.\n");
	}	
	
	else
	{
		printf("음수입니다.\n");
	}
	

	
	return 0;
}
