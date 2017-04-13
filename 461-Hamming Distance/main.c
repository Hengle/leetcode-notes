#include <stdio.h>

int hammingDistance(int x, int y) 
{

	int ret = 0;
	int diff = x^y;

	int it = 0;
	while (it++ < sizeof(int)*8)
	{
		ret+= diff&1 ;
		diff = diff>>1;
	}

	return ret;
}

int main()
{
	int num1,num2;

	printf("num1 = ");
	scanf("%d",&num1);
	printf("num2 = ");
	scanf("%d",&num2);

	printf("hammingDistance(%d,%d) = %d", num1,num2,hammingDistance(num1,num2) );

	getchar();

	return 0;

}