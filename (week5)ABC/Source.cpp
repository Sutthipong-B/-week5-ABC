#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[3], temp = 0, A, B, C;
	char x[4];
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	scanf("%s", &x);
	for (int i = 0; i < 3; i++)
	{
		temp = 0;
		for (int j = 0; j < 3; j++)
		{
			if (temp <= a[j])
			{
				temp = a[j];
			}
		}
		for (int k = 0; k < 3; k++)
		{
			if (temp == a[k])
			{
				a[k] = -1;
				break;
			}
		}
		if (i == 0)
		{
			C = temp;
		}
		else if (i == 1)
		{
			B = temp;
		}
		else
		{
			A = temp;
		}
	}
	for (int l = 0; l < 3; l++)
	{
		if (x[l] == 'C')
		{
			printf("%d ", C);
		}
		else if (x[l] == 'B')
		{
			printf("%d ", B);
		}
		else if (x[l] == 'A')
		{
			printf("%d ", A);
		}
	}
	return 0;
}