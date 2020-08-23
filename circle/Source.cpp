#include<stdio.h>
int main()
{
	float r;
	printf("Enter radius : ");
	scanf_s("%f", &r);
	const float Pi = 3.14;
	float area = Pi * r * r;
	printf("This circle's area = %.2f\n", area);
	float cir = 2 * Pi * r;
	printf("This circle's circumference = %.2f", cir);
	return 0;
}