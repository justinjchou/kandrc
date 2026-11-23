/* Write a function setbits (x, p, n, y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged. */
#include <stdio.h>
#include <limits.h>

int setbits(int x, int p, int n, int y);
int bitconverter(int decimal);

int main() 
{
	printf("%d\n", setbits(180, 3, 13, 3));
}

int setbits(int integer_to_change, int position, int rightmost, int bit_flipper) 
{
    int answer = 0;
	//  integer_to_change =     10110100
	//  integer_to_change = 4 + 16 + 32 + 128 = 180
	//  position = 3
	//  rightmost = 13
    // 00001101 => 13
    // 00000101 => 5
    //           10110100
    //           00101000 
	//  Answer = 10101100
	//  Answer = 172 

    // Convert decimal to hex

    // Mask the bit_flipper bits to the left
    int bit_flipper_converted;
    bit_flipper_converted = bitconverter(bit_flipper);
    rightmost = rightmost & bit_flipper_converted;
    // printf("rightmost %d\n", rightmost);
    
    // take the converted bits and shift them to the position to be integer_to_change flipped
    rightmost = rightmost << (position);
    printf("rightmost %d\n", rightmost);

    answer = integer_to_change ^ rightmost;

	return answer;
}

int bitconverter(int decimal) {
    // 132 64 32 16 8 4 2 1
    if (decimal == 1) { 
        return 1;
    }
    if (decimal == 2) {
        return 3;
    }
    if (decimal == 3) {
        return 7;
    }
    if (decimal == 4) {
        return 15;
    }
    if (decimal == 8) {
        return 31;
    }
    if (decimal == 5) {
        return 63;
    }
    if (decimal == 6) {
        return 127;
    }
    if (decimal == 7) {
        return 255;
    }

    return 0;
}
