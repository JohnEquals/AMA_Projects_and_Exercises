#include <stdio.h>

int main(void){

    // square.c
    /*
    int i, n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("&d", &n);

    i = 1;
    while (i<= n) {
        printf("%10d%10d\n",i,i*i);
    }
    */
    // sum.c
    // Note: you can either input like "4 2 5 0 ENTER"
    // or "4 ENTER 5 ENTER 5 ENTER 0 ENTER"
    // This is because of how scanf reads input; it skips whitespace characters
    // and interprets white space characters as indicators of separate input
    /*
    int n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    // requires a 2nd scanf statement before the while loop
    // to test for bad input allow for immediate termination of loop
    scanf("%d", &n);
    while ( n != 0){
        sum += n;
        scanf("%d", &n);
    }
    printf("The sum is: %d\n", sum);
    */
    /*
    i = 10;
    do {
        printf("T minus %d and counting\n",i);
        --i;
    } while ( i > 0);
    */
    /*
    int digits = 0, n;
    printf ("Enter a nonnegative integer: ");
    scanf("%d", &n);
    */
    // the reason we don't use a while loop here is
    // that we need to account for the case where input
    // is 0.  Since our condition is n>0, if n is 0,
    // this loop would not run at all if it were a while
    // loop, giving us 0 digits as an incorrect answer.
     /*
     do {
        n /= 10;
        digits++;
     } while (n>0);

     printf("he number has %d  digits(s).\n",digits);
     */
     // ex of for loop
     // when this loop is executed, i is initialized to 0,
     // i is tested for i > 0, if it is, run loop body,
     // and decrement i.
     // for works similarly to while loop
     /*
     for (i = 10; i > 0; i--)
        printf("T minus %d and counting\n",i);
     */

    // modified squares.c program
    /*
    int i, n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
        printf("%10d%10d\n", i, i * i);
    */
    /*
    int i, n, odd, square;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    i = 1;
     odd = 3;
    for ( square = 1; i <= n; odd += 2) {
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }
    */
    /*
    for (d  = 2; d < n; d++)
        if (n % d == 0)
            break;
    if (d<n)
        printf("%d is divisible by %d\n",n,d);
    else
        printf("%d is prime\n",n);
    */

    //checking.c
    /*
    int cmd;
    float balance = 0.0f, credit, debit;
    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear , 1=credit, 2=debit, ");
    printf("3=balance, 4=exit\n\n");
    for (;;){
        printf("Enter command: ");
        scanf("%d", &cmd);
        switch (cmd){
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Enter amount of credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter amount of debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Current balance: $%.2f\n", balance);
                break;
            case 4:
                // return statement causes the main function return to OS
                return 0;
                // note that theres no break statement here.
                // put a break after a return statement will never execute
                // this should yield an warning message on some compilers
            default:
                printf("Commands: 0=clear, 1=credit, 2=debit, ");
                printf("3=balance, 4=exit\n\n");
                break;
        }
    }
    */


    // exercises 6.1
    // theoretical output: 1 2 4 8 16 32 64 128
    // final value of i is 256
    /*
    i = 1;
    while (i <= 128)  {
        printf("%d ", i);
        i *= 2;
    }
    */
    // 2
    // output: 9384 938 93 9
    // final i = 0 since decimals are truncated when stored in integers
    /*
    int i = 9384;
    do {
        printf("%d ", i);
        i /= 10;
    }while (i > 0);
    */
    // 3
    // output: 5 4 3 2
    // iter 1: i=5, j=4
    // iter 2: i=4, j=3
    // ...
    // stops at iter 4, checks condition: i=1, j=0, fails
    /*
    int i,j;
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i -1)
        printf("%d ", i);
    */
    // 4
    // a and b are equal but c is not equal to both a and b
    // a. for (i=0; i<10; i++)...
    // b. for (i=0;i<10;++i)
    // c. for (i=0;i++<10;)...
    // remember that post-increment evaluates expression at current
    // variable value before applying increment so
    // 1 2 ... 10 gets outputted.  But if you change to pre-increment,
    // 9 is the final value in the output.
    /*
    for (int i=0;i++<10;)
        printf("%d ",i);
    */
    // 5
    //  the while and for loops are equivalent since they check the condition before running body
    // but the do-while will run the body before checking condition
    /*
    a. while (i<10) {...}
    b. for (; i <10; ) {...}
    c. do {...} while (i <10);
    */
    // 6
    // Note: 1 line body = single statement
    //  {} body = compound statement
    /*
    for (int i = 1; i <= 128; i *= 2)
        printf("%d ",i);
    */
    // 7
    /*
    for (int i = 9384; i > 0; i /= 10)
        printf("%d ",i);
    */
    // 8
    // output: 10 5 3 2 1 1 1 1 1...
    // this turns into an infinite loop at i = 1
    // iter 0: i =10, iter 1: i= 5, iter 2: i = 3,
    // iter 3: i = 2, iter 4: i = 1
    // then this becomes infinite loop at i = 1
    /*
    for ( int i = 10; i >= 1; i /= 2)
        printf("%d ", i++);
    */
    // 9
    /*
    int i = 10;
    while ( i >= 1){
        printf("%d ", i++);
        i /= 2;
    }
    */
    // 10
    // To change a continue statement to a goto statement,
    // you replace continue statement with the goto statement
    // and place the label statement as the last line of code in the loop
    // Original continue program:
    /*
    int n = 0, i, sum = 0;
    while ( n < 3) {
        scanf("%d", &i);
        if (i==0)
            continue;
        sum += i;
        n++;
	// continue jumps to here
    }
    printf("the sum is %d", sum);
    */
    // Continue program modified such that
    // goto is used instead of continue
    /*
    int n = 0, i, sum = 0;
    while ( n < 3) {
        scanf("%d", &i);
        if (i==0)
            goto next_iter;
        sum += i;
        n++;
        // goto arrives here
        next_iter: ;
    }
    printf("the sum is %d", sum);
    */
    // 11
    // output:  20
    // iteration:     1 2 3 4 5 6  7  8  9 10
    // values of i:   0 1 2 3 4 5  6  7  8  9 ->10
    // values of sum: 0 0 2 2 6 6 12 12 20 20
    /*
    int sum = 0;
    for (int i = 0; i < 10; i++){
        if ( i % 2) // if i % 2 is true, aka i % 2 =/= 0 meaning there is a remainder
            continue;
        sum += i;
    }
    printf("%d\n", sum);
    */
    // 12
    // Modified the prime-testing program from 6.4
    // to be more time efficient by dividing n by all
    // numbers between 2 and square root of n.
    // In other words, we want d < sqrt(n).
    // There is some theorem from Number theory.
    // Since there is no square root operator in C,
    // use mathematical manipulation to get d*d < n
    // so we change all conditions accordingly.
    /*
    int n, d;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    for (d = 2; d*d < n; d++)
        if (n % d == 0)
            break;
        if (d*d<n)
            printf("%d is divisible by %d\n",n,d);
        else
            printf("%d is prime\n",n);
    */
    // 13
    // original code
    //int n, m = 8; // for visibility
    /*
    for (n = 0; m > 0; n++)
        m /=2;
    //printf("%d %d",n,m);  // for visibility
    // modified code such that the body is empty:
    for (n = 0; m > 0; n++,m /=2)
        ;  // continue; works too
    */
    return 0;
}

