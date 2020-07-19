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
   int sum = 0;        /* Initializing sum to 0 */
   int index;

   for(index = 3; index < 1000; index++)  /* Traversing from 3 to 1000 */
   {
      if(((index%3) == 0)||((index%5) == 0)) /* whether the number is multiple of 3 or 5  */
      {
         sum+=index;  /* if multiple of 3 or 5 the number is added to sum  */
      }
   }

   printf("sum of all multiples of 3 or 5 below 1000 : %d\n",sum); /* print the sum */
   return 0;
}
