#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int prinsu(int x)
{
	int i = 0;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			break;

		}
		else if (i == x - 1)
		{
			printf("%d\n", x);
		}
	}
	
	return 0;
}

int main()
{
	int a = 0;
	for (a = 100; a < 201; a++)
	{
		prinsu(a);


	}



	return 0;
}