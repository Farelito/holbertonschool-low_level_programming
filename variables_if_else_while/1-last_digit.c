
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int n;
int lastDgt;    
srand(time(NULL));

n = rand();

scanf("%d", &n);

lastDgt = abs(n) % 10;
printf("Last digit of %d is ", n);

if(lastDgt > 5 )
{
    printf("and is greater than 5\n");
}else if (lastDgt == 0)
{
printf("and is 0\n");
}else
{
printf("and is less than 6 and not 0\n");
}
return(0);
}
