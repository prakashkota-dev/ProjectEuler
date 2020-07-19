/*
 *  Problem No: 2
 *  Problem statement: Find the sum of even-valued fibonacci terms whose max value is 4 million 
 *
 *  Author: Mohan
 *
 */

#include<stdio.h>

#define MAX_FIB_NUM 4000000 /* Maximum fibonacci number should not exceed 4 million  */

int firstFib = 1;     /* First term of Fibonacci sequence */
int secondFib = 2;    /* Second term of Fibonacci sequence */

int Get_next_FibNum(void); /* Function to get next Fibonacci number */

int main()
{
   int sum = 2;   /* Initializing sum to 2 as this is first even fibonacci num */
   int fibNum = 0;

   while(fibNum < MAX_FIB_NUM)  /* Check whether maximum value exceeded 4 million */
   {
      if((fibNum%2) == 0)   /* check whether the number is even */
      {
         sum += fibNum;     /* add the even term to the sum  */
      }

      fibNum = Get_next_FibNum(); /* get next number in fibonacci sequence */
   }

   printf("sum of even-terms of fibonacci num :%d\n",sum); /* print the output */

   return 0;
}

int Get_next_FibNum()     /* Function definition  */
{
   int tempNum = firstFib;   /* store the first term in temp variable */
   firstFib = secondFib;     /* store second term into first term */
   secondFib+=tempNum;       /* add first and second term to get next term */

   return secondFib;
}
