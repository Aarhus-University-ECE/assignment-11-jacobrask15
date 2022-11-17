#include "sum.h"

#include <stdio.h>
#include <assert.h>

/* Sum integers 1 to n */
int sum(int n)
{
  /* pre-condition */
  assert(n >= 1);
  /* post-condition */
  if (n > 1)
    return n + sum(n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail(int n, int total)
{
  /* pre-condition */
  assert(n >= 1);
  if (n == 1)
  {
    return 1 + total; /*base case*/
  }
  else
  {
    return sumtail(n - 1, total + n); /*inductive step*/
  }
}

/* Sum integers 1 to n */
int sumwhile(int n)
{
  int ans = 0; /*variable to store answer*/
  while (n > 0)
  { /*loop that sums all integers from n to 1*/
    ans += n;
    n = n - 1;
  }

  return ans; /*returning the answer*/
}
