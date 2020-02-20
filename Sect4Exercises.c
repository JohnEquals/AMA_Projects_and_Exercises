#include<stdio.h>

int main(void)
{
    /*
    // 1a
    int i = 5, j = 3;
    printf("%d %d",i/j, i % j);
    // 1b
    int i = 2, j = 3;
    printf("%d",(i+10) % j);
    // 1c
    int i = 7, j = 8, k = 9;
    printf("%d", ( i + 10 ) % k/j);
    // 1d
    int i = 1, j = 2, k = 3;
    printf("%d", ( i + 5 ) % (j + 2) / k);
    */
    // 2
    // If i and j are positive integers, (-i)/j does not
    // always have the same value as -(i/j).  As we saw earlier,
    // depending on the implementation (such as C89 vs C99 standard),
    // (-i)/j can either truncate by rounding upwards or downwards.
    // 3
    // In C89 standard,
    // a) 8 / 5 yields 1, b) -8 / 5 can be either -1 or -2
    // c) 8 / -5 yields either -1 or -2 d) -8 / -5 yields 1
    // 4
    // In C99 standard,
    // a) 8 / 5 yields 1, b) -8 / 5 is -1 c) 8 / -5 is -1
    // d) -8/-5 is 1
    // 5 & 6
    // In C89, a-d) 8 % 5 = 3, -8 % 5 = -3 or 2,8 % -5 = -3 or 2, -8 % -5 = -3 or 2
    // In C99, a-d) 8 % 5 = 3, -8 % 5 = -3,8 % -5 = 3, -8 % -5 = -3  (result has same sign as i in i % j)
    // 7
    // UPC check digits algorithm:
    // (((total - 1) % 10 ) - 9)
    // The following algorithm:  10 - ( total % 10 )
    // Suppose total = 20.  Then the 1st algorithm gives us 0
    // However, the 2nd algorithm gives us 10.  Our answer should be a single digit between 0-9
    // 8
    //  Yes, t would still work under the new expression
    // 9

    return 0;
}
