#include <stdio.h>
int fact(int n);
int main()
{
    int num, result;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        result = fact(num);
        printf("Factorial of %d is %d\n", num, result);
    }
    return 0;
}
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n*fact(n - 1);
}
