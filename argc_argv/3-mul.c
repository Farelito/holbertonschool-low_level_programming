#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /*int i;*/
     /*int number3 = atoi(argv[0]);*/
   int number2 = atoi(argv[2]);
   int number1 = atoi(argv[1]);
  
    if (argc != 2) 
    {
        printf("Error");
        return 1;
    }
   
         printf("%d\n", number1 * number2);

	return (0);

}
