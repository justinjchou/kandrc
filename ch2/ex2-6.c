/* Write a function setbits (x, p, n, y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged. */
/* 
 * x = 1
 * p = 0
 * n = 1
 * y = 1
 * Ex: 1 => 1
 * 1 >> 2 => 10
 *  p beginning
 *  01
 *  10
 *  100
 *
 */
#include <stdio.h>

int setbits(int x, int p, int n, int y);
int main() 
{
	printf("%d\n", setbits(180, 3, 3, 5));
}

int setbits(int x, int p, int n, int y) 
{
	//  x = 10110100
	//  x = 4 + 16 + 32 + 128 = 180
	//  y = 00000011
	//  y = 1 + 2 = 3
	//  n = 3
	//  p = 5
	//  Answer = 156
	//  Answer = 10011100
	int answer = 0;
	answer = n & n | p ~y; 
	
	return answer;
}
