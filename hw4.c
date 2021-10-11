#include <stdio.h>

int Division(int num)
{
	if (num < 2)
	{
		printf("%d", num);
	}
	else
	{
		Division(num / 2);
		printf("%d", num % 2);
	}
}


int main()
{
	int num;
	printf("please enter a number:");
	scanf("%d", &num);
	Division(num);
	return 0;
}