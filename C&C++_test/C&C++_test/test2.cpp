#include<stdio.h>

typedef struct sA {
	int a;
	int b[10];
}A;

typedef struct sB {
	int a;
	const int b;
}B;

int main() {
	A a1 = { 1, 0,1,2,3,4,5,6,7,8,9 }, a2 = { 1, { 0,1,2,3,4,5,6,7,8,9 } }, a3 = { 1, 0, };
	B b1 ={1,2}, b2 = { 0 }, b3 = { 0, };

	printf("a1.b[1]: %d, a3.b[3]: %d \n", a1.b[1], a3.b[3]);
	a3 = a1;//배열 복사
	printf("a3.b[9]: %d\n", a3.b[9]);

	//b1 = b2; 상수 멤버 있으면 X
	
	return 0;
}