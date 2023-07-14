#include<stdio.h>

char var1;

void func1()
{
   int x;
   x=1;
   printf("%d",x);
   var1 = 'B';
}

int func2(int p1)
{
   p1++;
   return p1*2;
}

int main()
{
   var1 = 'A';
   int x=5;
   int y=3;
   int z=7;
   func1();
   z=func2(y);
   printf("%c%d%d%d",var1,x,y,z);
}
