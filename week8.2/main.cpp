#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct Height
{
	float num;
};

void sumHeight(int* x)
{
	int sum = 0;
	Height height[10];
	for (int i = 0; i < 10; i++)
	{
		printf("student[%d]'s height(cm) = ", i + 1);
		scanf("%f", &height[i].num);
	}
	for (int i = 0; i < 10; i++)
	{
		sum = sum + height[i].num;
	}
	*x = sum;
}

void averageHeight(float* x)
{
	*x = *x / 10;
}

int main()
{
	int sum = 0;
	float avg;
	sumHeight(&sum);
	printf("\nSum of height(cm) = %d\n", sum);
	avg = sum;
	averageHeight(&avg);
	printf("Avg of height(cm) = %.2f\n", avg);

	return 0;
}