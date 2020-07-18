/*
 * Problem No : 1
 * Problem Statement: Find the sum of all the multiples of 3 or 5 below 1000.
 *
 * Author : Mohan
 *
 */

#include<stdio.h>

int main()
{
   int sum = 0;
   int index;

   for(index = 3; index < 1000; index++)
   {
      if(((index%3) == 0)||((index%5) == 0))
      {
         sum+=index;
      }
   }

   printf("sum of all multiples of 3 or 5 below 1000 : %d\n",sum);
   return 0;
}
