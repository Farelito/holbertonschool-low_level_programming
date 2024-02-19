#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int n = 0;
srand(time(NULL));
 n = rand();
if (n > 0 )
{
printf("%d is positive", n);
}else if (n == 0)
{
printf("%d is zero", n);
}else
{
printf("%d is negative", n);
}
return(0);
}
