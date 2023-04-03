#include <stdio.h>

int main()
{
	short sh = -32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short형 변수 출력:%d\n", sh);
	printf("int형 변수 출력:$d\n", in);
	printf("long형 변수 출력:%d\n", ln);
	printf("long long 변수 출력:%lld\n", lln);
	printf("sh형의 크기:%d바이트\n", sizeof(30));
	return 0;
}
