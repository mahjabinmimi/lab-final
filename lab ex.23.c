#include <iostream>
int main()
{
	int n, fact = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) fact *= i;
	printf("Factorial of %d is: %d\n", n, fact);
	return 0;
}

