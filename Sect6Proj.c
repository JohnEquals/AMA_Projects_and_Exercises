#include<stdio.h>

int main(void){

    // 6.1
    /*
    float fNum, fLargest = 0;
    printf("This program finds the largest number from a series of inputs from the user\n");
    printf("Enter 0 or a negative number to exit\n");
    printf("Enter a number: ");
    scanf("%f",&fNum);
    while (fNum > 0)
    {
        if(fNum > fLargest)
            fLargest = fNum;
        printf("Enter a number: ");
        scanf("%f",&fNum);

    }
    if(fLargest > 0)
        printf("The largest number entered was %.2f",fLargest);
    else
        printf("Invalid input!");
    */


    // 2
    // Euclid's algorithm for finding gcd of two natural numbers
    /*
    int iM,iN, iGCD ;
    printf("Enter two integers: ");
    scanf("%d %d",&iM ,&iN);
    while(1){
        if ( iN == 0)
            break;
        else
        {
            iGCD = iM % iN; // iGCD is a placeholder variable
            iM = iN;
            iN = iGCD;
        }
    }
    // at the end of the Euclidean Algorithm, m contains the GCD
    printf("Greatest common divisor: %d",iM);
    */


    // 3
    // Program prompts the user for a fraction and
    // reduces the fraction to lowest terms.
    // Reuses the code from proj #2 to find GCD
    // and divides both numerator and denominator
    // by GCD
    /*
    int iM,iN, iGCD, iOrigNum, iOrigDenom ;
    printf("Enter a fraction: ");
    scanf("%d/%d",&iM ,&iN);
    iOrigNum = iM;  // placeholders for original fraction
    iOrigDenom = iN;
    while(1){
        if ( iN == 0)
            break;
        else
        {
            iGCD = iM % iN; // iGCD is a placeholder variable
            iM = iN;
            iN = iGCD;
        }
    }
    printf("In lowest terms: %d/%d", iOrigNum / iM , iOrigDenom / iM );
    */

    // 4
    // Modified the original broker.c program
    // to handle multiple instances of trade input
    /*
    float commission, value;

    printf("Enter value of trade: ");
    scanf("%f", &value);
    while(value != 0){
    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 2500.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);
    printf("Enter value of trade: ");
    scanf("%f", &value);
    }
    */

    // 5
    // original proj 4.1
    /*
    int iOriginalDigit;
    printf("Enter a two-digit number: ");
    scanf("%d",&iOriginalDigit);
    printf("The reversal is: %d%d", iOriginalDigit % 10, iOriginalDigit / 10);
    // modified proj 4.1
    // Now handles any size digit (that can fit in a 4 byte int)
    int iOriginalDigit;
    printf("Enter a number: ");
    scanf("%d",&iOriginalDigit);
    printf("The reversal is: ");
    do {
        printf("%d",iOriginalDigit % 10);
        iOriginalDigit /= 10;
    } while (iOriginalDigit != 0);
    */

    //  6
    /*
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for( int i = 2; i*i <= n; i += 2){
        //if(i*i % 2 == 0)
            printf("%d\n",i*i);
    }
    */

    // 7
    // square3.c prog modified to use comma operator
    // in for expression in order to add more
    // increment terms and variable initializations
    /*
    int i, n, odd, square;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    odd = 3;
    for (square = 1, i = 1; i <= n; ++i,odd +=2){
        printf("%10d%10d\n", i, square);
        square += odd;
    }
    */
    // 8
    // prints a one-month calender
    /*
        int n,iStartDay, i, j;
        printf("Enter number of days in month: ");
        scanf("%d", &n);
        printf("Enter starting day of the week (1=Sun, 7=Sat): ");
        scanf("%d", &iStartDay);
        printf("\n");
        for( j = 1; j < iStartDay; j++){
            printf("   "); // starting day is always 1-7 so this displaces the starting day appropriately
        }
        for( i = 1; i <= n; i++, j++ ){
            printf("%3d", i);
            if ( j % 7 == 0)
                printf("\n");
        }
    */
    // 9
    // modified ch 2 proj 8
    /*
    int iNumPay;
    float fLoan, fInterestRate, fMonthPay, fMonthInterestRate,currentBalance;
    printf("Enter amount of loan: ");
    scanf("%f",&fLoan);
    printf("Enter interest rate: ");
    scanf("%f",&fInterestRate);
    printf("Enter monthly payment: ");
    scanf("%f",&fMonthPay);
    printf("Enter number of payments: ");
    scanf("%d",&iNumPay);
    fMonthInterestRate = fInterestRate/12;

    for (int i = 1; i <= iNumPay; i++){
    if( i == 1)
        currentBalance = (fLoan*(1.0f + ( fMonthInterestRate / 100.0f ))) - fMonthPay;
    else
        currentBalance = (currentBalance*(1.0f + ( fMonthInterestRate / 100.0f ))) - fMonthPay;
    printf("Balance remaining after payment #%d: %0.2f\n",i,currentBalance);
    }
    */
    // 10
    // Modified version of Sect 5 Proj 9
    // Code can now handle multiple inputs for dates
    // and will output the earliest date
    /*
    int iMonth1, iDay1, iYear1, iMonth2, iDay2, iYear2;
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &iMonth1, &iDay1, &iYear1);
    while ( iMonth1 != 0 && iDay1 != 0 && iYear1 != 0){
    if( iYear1 < iYear2 ){
        iMonth2 = iMonth1;  // the 2nd set of values starts with dummy values to run the loop
        iDay2 = iDay1;      // after the 1st iteration, 2nd set of data becomes storage
        iYear2 = iYear1;    // and the 1st set of data become dynamic input, changing every iteration
    }
    else if(iYear1 > iYear2)
        ;
    else if(iMonth1 < iMonth2){
        iMonth2 = iMonth1;
        iDay2 = iDay1;
        iYear2 = iYear1;
    }
    else if(iMonth1 > iMonth2)
        ;
    else if(iDay1 < iDay2){
        iMonth2 = iMonth1;
        iDay2 = iDay1;
        iYear2 = iYear1;
    }
    else if(iDay1 > iDay2)
        ;
    else
        printf("You entered the same date twice!");

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &iMonth1, &iDay1, &iYear1);
    }
    printf("%d/%d/%d is the earliest date", iMonth2, iDay2, iYear2);
    */
    // 11
    /*
    int n, iFactorial;
    float fMathConstantE = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for ( int i = 0; i <= n; i++){
        if(
        if(i == 0)
            iFactorial = 1;
        else
            iFactorial *= i;
        printf("current factorial for iter %d is: %d\n",i,iFactorial);
        fMathConstantE +=  1.0f / iFactorial;
        printf("current e value: %.2f\n",fMathConstantE);
    }
    printf("The approximate value of e for %d iterations is: %.2f",n,fMathConstantE);
    */
    // 12
    /*
    int n, iFactorial;
    float fMathConstantE = 0.0f, fEpsilon;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a small number epsilon: ");
    scanf("%f", &fEpsilon);
    for ( int i = 0; i <= n; i++){
        if( i == 0)
            iFactorial = 1;
        else
            iFactorial *= i;
        printf("current factorial for iter %d is: %d\n",i,iFactorial);
        if( (1.0f / iFactorial) < fEpsilon)
            break;
        fMathConstantE +=  1.0f / iFactorial;
        printf("current e value: %.2f\n",fMathConstantE);

    }
    printf("The approximate value of e for %d iterations is: %.2f",n,fMathConstantE);
    */

    return 0;
}
