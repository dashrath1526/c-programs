					//sum of digits of number using recursion

#include<stdio.h>

int sum(num) {
	if(num != 0) {
		return (num % 10 + sum(num / 10));
	} else {
		return 0;
	}
}

int main(void){
	int num, result;

	printf("Enter number: ");
	scanf("%d", &num);

	result = sum(num);

	printf("Sum of digits of %d is %d\n", num, result);
}
