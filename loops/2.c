	//Check number is Positive, Negative or Zero using C program

#include<stdio.h>

int main(void) {
	int n;
	char q;
		
	do{
		printf("Enter number: ");
		scanf("%d", &n);

		if(n > 0)
			printf("%d is positive\n", n);
		else if(n < 0)
			printf("%d is negative\n", n);
		else
			printf("n is zero\n");
		
		printf("Want to check again(Y/y):");
		//fflush(stdin);		clear buffer
		scanf(" %c", &q);
	} while(q == 'Y' || q == 'y');
}
