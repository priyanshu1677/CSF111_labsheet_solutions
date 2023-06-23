#include <stdio.h>
#include <math.h>
int lead(int x)
{
   int temp;
   while (x > 0)
   {
      temp = x;
      x = (x / 10);
   }
   return temp;
}
int main(void)
{
   printf("%d\n", lead(5734));
   return 0;
}