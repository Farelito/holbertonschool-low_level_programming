#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int digit;
int dgt = 0;

for (digit = 0; digit <= 98; digit++)
{
   for (dgt = digit + 1; dgt < 99; dgt++)
   {
      printf("%02d %02d, ", digit, dgt);
     
   }
}
putchar('\n');
return(0);
}