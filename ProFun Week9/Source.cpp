#include<stdio.h>

int main()
{
	int i=0,n,a[1010],temp;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int j = 1; j <= n; j++) 
	{
		for (int i = 1; i < n; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{

		printf("%d ",a[i]);
	}
	return 0;
}