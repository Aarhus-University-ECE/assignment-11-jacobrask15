/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h> /* assert */
#include <stdio.h>  /* printf */

/* Fibonacci function definition */
int fib(int n, int p, int pp)
{
    assert(n >= 0); /*precondition*/

    /*p and pp are at first the fib numbers for the two base cases*/
    if (n == 1)
    {
        return p;
    }
    else if (n == 2)
    {
        return pp;
    }
    else
    {
        return fib(n - 1, pp, p + pp); /*p and pp is updated to be fib numbers of higher numbers until pp is fib number of n*/
    }
}
