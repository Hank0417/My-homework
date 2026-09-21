#include<stdio.h>
#include<stdlib.h>
//2.31
int main()
{
	int a;
	int sum1, sum2, sum3;
	printf("number	square	cube\n");
	for (a = 0; a <= 10; a++)
	{
		sum1 = a;
		sum2 = a*a;
		sum3 = a * a * a;
		printf("%d	%d	%d\n", sum1, sum2, sum3);
	}
}