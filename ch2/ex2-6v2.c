/* Write a function setbits (x, p, n, y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged. */
#include <stdio.h>
#include <limits.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main() 
{
	printf("%d\n", setbits(180, 3, 13, 3));
	printf("%d\n", setbits(183008257, 5, 5, 90161195));
	printf("%d\n", setbits(183008257, 5, 5, 90161195));
}

unsigned setbits(unsigned x, int p, int n, unsigned y) 
{
    unsigned mask = ((1u << n) - 1u) << p;
    return (x & ~mask) | ((y & ((1u << n) - 1u)) << p);
}
