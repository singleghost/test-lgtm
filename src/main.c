#include<stdio.h>
int main() {
	unsigned op1 = 0xffffffff;
	unsigned op2 = 2;
	unsigned result;
	result = op1 + op2;
	if(result < op2) {
		printf("overflowed!\n");
	}
	else {
		printf("not overflow!\n");
	}
}
