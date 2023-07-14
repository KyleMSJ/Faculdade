#include <stdio.h>
#include <stdlib.h>

void triangulo(int n)
{​​
int i;
for(i=0; i<n; i++)
printf("*");
triangulo(n-1);
}​​
printf("\n")
int main()
{​​
int n;
scanf("%d",&n);
triangulo(n);
}​​
