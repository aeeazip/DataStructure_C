#include <stdio.h> 
int fact(int n)
{ 
	if (n == 0)
		return 1;
	else
		return n * fact(n - 1);
}
int main(void)
{
	int n;
	printf("Enter a number:");
	scanf_s("%d", &n);

	printf("%d! = ", n);
	printf("%d\n", fact(n));
}