#include<stdio.h>
#include<stdlib.h>
int main() {
	unsigned op1 = random();
	unsigned op2 = random();
	unsigned op3 = random();
	op1 = op2 + op3;
	if(op1 < 100) { //bad overflow check
		printf("not overflowed!\n");
	}
	else {
		printf("overflowed\n");
	}
	return 0;
}
