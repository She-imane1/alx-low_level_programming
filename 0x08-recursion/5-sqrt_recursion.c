#include "main.h"
int sqrt_rec_odd(int start, int n)
/**
 * sqrt_rec_odd - helper to deal with odd numbers and primes
 * @start: the odd or prime number to check for sqrt
 * @n: number to find the square root of
 *_sqrt_recursion -  returns the natural square root of a number
 *@n: number to find the square root of
 *Return: 0
 */
int _sqrt_recursion(int n)
{
int square;
if (n < 0)
return (-1);
else if (n <= 1 && n >= 0)
return (n);
if (!(n % 2))
{
if (n / 2 == 2 || n == 2)
return (2);
square = _sqrt_recursion(n / 2);
if (n / square == square)
return (square);
else if (square > 1)
return (square * 2);
return (-1);
}
else
{
return ((sqrt_rec_odd(n, n - 2)));
}
}
int sqrt_rec_odd(int start, int n)
{
if (n < 0)
return (-1);
else if (start == n * n)
return (n);
else
return (sqrt_rec_odd(start, n - 2));
}
