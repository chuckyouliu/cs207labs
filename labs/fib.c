#include<stdio.h>

int fib(n)
{
   if (n == 1) return 0;
   if (n == 2) return 1;
   return fib(n-1) + fib(n-2);
}

int main()
{
   printf("%d",fib(8));
   return 0;
}
