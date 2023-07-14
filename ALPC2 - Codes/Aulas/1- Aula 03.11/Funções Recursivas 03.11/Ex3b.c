#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if(n == 2 || n == 1) return 1; //dois primeiros elementos de Fibonacci
    return fibonacci(n-1) + fibonacci(n-2); // fibonacci(4) + fibonacci (3) + 1 + 1
}                                           // fibonacci(3) = 2 | fibonacci(4) = 3

int main()
{
    printf("%d",fibonacci(6)); // 1 1 2 3 5 *8*
    return 0;
}
