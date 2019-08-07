				//fibonnaci sequence using command line arguments

#include<stdio.h>

int first = 0;
int second = 1;
int third;

void rec_fibb(int num);

int main(char argc, char *argv[]) {
	int number = atoi(argv[1]);

	printf("%d\t%d", first, second);
	rec_fibb(number);
	printf("\n");
	return 0;
}

void rec_fibb(int num) {
	if(num == 2) {
		return;
	}
	
	third = first + second;
	printf("\t%d", third);
	first = second;
	second = third;
	num--;
	rec_fibb(num);
}
