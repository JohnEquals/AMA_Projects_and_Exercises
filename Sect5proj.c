
#include <stdio.h>

int main (void){

    // Section 5 Projects

    // #1
    // We assume that we are receiving an input of
    // maximum 4 digits that is positive.
    // This program can be further developed to handle
    // bad input
    /*
    int iNum,iDig;
    printf("Enter a number: ");
    scanf("%d",&iNum);
    if( iNum >= 0 && iNum <= 9 )
        iDig = 1;
    else if( iNum >= 10 && iNum <= 99 )
        iDig = 2;
    else if( iNum >= 100 && iNum <= 999 )
        iDig = 3;
    else
        iDig = 4;
    printf("The number %d has %d digits\n",iNum,iDig);
    */

    // #2
    // takes 24-hour time input and coverts to 12-hr time
    /*
    int iHour,iMin;
    printf("Enter a 24-hour time: ");
    // we expect an input in 24-hour time
    scanf("%d:%d",&iHour,&iMin);
    // converts to 12-hour time
    if(iHour == 0)
        printf("Equivalent 12-hour time: %d:%d AM",iHour + 12,iMin);
    else if(iHour > 0 && iHour <= 11)
            printf("Equivalent 12-hour time: %d:%d AM",iHour,iMin);
    else if(iHour == 12)
        printf("Equivalent 12-hour time: %d:%d PM",iHour,iMin);
    else
        printf("Equivalent 12-hour time: %d:%d PM",iHour-12,iMin);
    */

    // #3
    // modified broker.c program
    /*
    float commission, value;

    //printf("Enter value of trade: ");
    //scanf("%f", &value);
    // part a
    int iNumOfShares;
    float fPricePerShare;

    printf("Enter the number of shares: ");
    scanf("%d",&iNumOfShares);
    printf("Enter the price per share: ");
    scanf("$%f",&fPricePerShare);
    value = iNumOfShares * fPricePerShare;

    // part b
    float fRivalCommission;

    if (iNumOfShares < 2000)
        fRivalCommission = 33.00f + .03 * iNumOfShares;
    else if (iNumOfShares >= 2000)
        fRivalCommission = 33.00f + .02 * iNumOfShares;

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

    printf("Original Commission: $%.2f\n", commission);
    printf("Rival Commission: $%.2f\n", fRivalCommission);
    */

    // #4
    /*
    int iKnots;
    printf("Enter a wind speed (in knots): ");
    scanf("%d",&iKnots);
    if(iKnots < 1)
        printf("Calm");
    else if(iKnots >= 1 && iKnots < 4)
        printf("Light Air");
    else if(iKnots >= 4 && iKnots < 28)
        printf("Breeze");
    else if(iKnots >= 28 && iKnots < 48)
        printf("Gale");
    else if(iKnots >= 48 && iKnots <= 63)
        printf("Storm");
    else
        printf("Hurricane");
    */

        // 5
    /*
    float fIncome, fTax;
    printf("Enter the amount of taxable income: ");
    scanf("%f",&fIncome);
    if(fIncome <= 750.00f)
        fTax = 0.01f * fIncome;
    else if(fIncome > 750.00f && fIncome <= 2250.00f)
        fTax = 7.50f + 0.02f * (fIncome - 750.00f);
    else if(fIncome > 2250.00 && fIncome <= 3750.00f)
        fTax = 37.50f + 0.03f * (fIncome - 2250.00f);
    else if(fIncome > 3750.00f && fIncome <= 5250.00f)
        fTax = 82.50f + 0.04f * (fIncome - 3750.00f);
    else if(fIncome > 5250.00f && fIncome <= 7000.00f)
        fTax = 142.50f + 0.05f * (fIncome - 5250.00f);
    else
        fTax = 230.00f + 0.06f * (fIncome - 7000.00f);
    printf("Tax Due: %.2f\n",fTax);
    */

    //6  (skipped)

    // 7
    // takes 4 integers as input and outputs the largest and smallest
    // utilizes a divide-and-conquer algorithm
    /*
    int iA, iB, iC, iD, iFirst, iSecond, iThird, iFourth, iSmallest, iLargest;

    printf("Enter four integer: ");
    scanf("%d %d %d %d",&iA, &iB, &iC, &iD);

    if(iB > iA)
    {
        iSecond = iB;
        iFirst = iA;
    }
    else
    {
        iFirst = iA;
        iSecond = iB;
    }
    if(iD > iC)
    {
        iThird = iC;
        iFourth = iD;
    }
    else
    {
        iThird = iD;
        iFourth = iC;
    }
    if(iFourth > iSecond)
        iLargest = iFourth;
    else
        iLargest = iSecond;

    if(iThird > iFirst)
        iSmallest = iFirst;
    else
        iSmallest = iThird;
    printf("Largest: %d\n",iLargest);
    printf("Smallest: %d\n",iSmallest);
    */

    // 8
    /*
    int iHour, iMin, iTime;
    printf("Enter a time in 24-hour format: ");
    scanf("%d:%d",&iHour,&iMin);
    // convert time to minutes
    iTime = iHour * 60 + iMin;
    //determine arrival time
    if( iTime >= (8 * 60) && iTime <= (9 * 60 + 43) )//hour*60 + mins
    {
        // print the closer departure time to the flight time
        if(iTime - (8 * 60) < (9 * 60 + 43) - iTime)
            printf("Closest departure time is 8:00 a.m. arriving at 10:16 a.m.\n");
        else
            printf("Closest departure time is 9:43 a.m. arriving at 11:52 a.m.\n");
    }
    else if( iTime >= (9 * 60 + 43) && iTime <= (11 * 60 + 19) )
    {
        if(iTime - (9 * 60 + 43) < (11 * 60 + 19) - iTime)
            printf("Closest departure time is 9:43 a.m. arriving at 11:52 a.m.\n");
        else
            printf("Closest departure time is 11:19 a.m. arriving at 1:31 p.m.\n");
    }
    else if( iTime >= (11 * 60 + 19) && iTime <= (12 * 60 + 47) )
    {
        if(iTime - (11 * 60 + 19) < (12 * 60 + 47) - iTime)
            printf("Closest departure time is 11:19 a.m. arriving at 1:31 p.m.\n");
        else
            printf("Closest departure time is 12:47 p.m. arriving at 3:00 p.m.\n");
    }
    else if( iTime >= (12 * 60 + 47) && iTime <= (14 * 60) )
    {
        if(iTime - (12 * 60 + 47) < (14 * 60) - iTime)
            printf("Closest departure time is 12:47 p.m. arriving at 3:00 p.m.\n");
        else
            printf("Closest departure time is 2:00 p.m. arriving at 4:08 p.m.\n");
    }
    else if( iTime >= (14 * 60) && iTime <= (15 * 60 + 45) )
    {
        if(iTime - (14 * 60) < (15 * 60 + 45) - iTime)
            printf("Closest departure time is 2:00 p.m. arriving at 4:08 p.m.\n");
        else
            printf("Closest departure time is 3:45 p.m. arriving at 5:55 p.m.\n");
    }
    else if( iTime >= (15 * 60 + 45) && iTime <= (19 * 60) )
    {
        if(iTime - (15 * 60 + 45) < (19 * 60) - iTime)
            printf("Closest departure time is 3:45 p.m. arriving at 5:55 p.m.\n");
        else
            printf("Closest departure time is 7:00 p.m. arriving at 9:20 p.m.\n");
    }
    else if( iTime >= (19 * 60) && iTime <= (21 * 60 + 45) )
    {
        if(iTime - (19 * 60) < (21 * 60 + 45) - iTime)
            printf("Closest departure time is 7:00 p.m. arriving at 9:20 p.m.\n");
        else
            printf("Closest departure time is 9:45 p.m. arriving at 11:58 p.m.\n");
    }
    else
    {   // this last else statement covers the case where the flight time is between
        // 9:45 p.m. and 8:00 a.m.
        if(iTime + (24 * 60) - (21 * 60 + 45) < (8 * 60) - iTime)
            printf("Closest departure time is 9:45 p.m. arriving at 11:58 p.m.\n");
        else
            printf("Closest departure time is 8:00 a.m. arriving at 10:16 a.m.\n");
    }
    */
    // 9
    /*
    int iMonth1, iDay1, iYear1, iMonth2, iDay2, iYear2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &iMonth1, &iDay1, &iYear1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &iMonth2, &iDay2, &iYear2);

    if( iYear1 < iYear2)
        printf("%d/%d/%d is earlier than %d/%d/%d", iMonth1, iDay1, iYear1, iMonth2, iDay2, iYear2);
    else if(iYear1 > iYear2)
        printf("%d/%d/%d is earlier than %d/%d/%d", iMonth2, iDay2, iYear2, iMonth1, iDay1, iYear1);
    else if(iMonth1 < iMonth2)
        printf("%d/%d/%d is earlier than %d/%d/%d", iMonth1, iDay1, iYear1, iMonth2, iDay2, iYear2);
    else if(iMonth1 > iMonth2)
        printf("%d/%d/%d is earlier than %d/%d/%d", iMonth2, iDay2, iYear2, iMonth1, iDay1, iYear1);
    else if(iDay1 < iDay2)
        printf("%d/%d/%d is earlier than %d/%d/%d", iMonth1, iDay1, iYear1, iMonth2, iDay2, iYear2);
    else if(iDay1 > iDay2)
        printf("%d/%d/%d is earlier than %d/%d/%d", iMonth2, iDay2, iYear2, iMonth1, iDay1, iYear1);
    else
        printf("You entered the same date twice!");
    */

    // 10
    /*
    int iGrade;
    printf("Enter numerical grade: ");
    scanf("%d",&iGrade);
    if (iGrade < 0 || iGrade > 100)
        printf("Error: incorrect input!");
    else
    switch(iGrade / 10){
        case (10):printf("Letter grade: A"); break;
        case (9): printf("Letter grade: A");break;
        case (8):printf("Letter grade: B");break;
        case (7): printf("Letter grade: C");break;
        case (6):printf("Letter grade: D");break;
        case (5): printf("Letter grade: F");break;
        case (4): printf("Letter grade: F");break;
        case (3): printf("Letter grade: F");break;
        case (2): printf("Letter grade: F");break;
        case (1): printf("Letter grade: F");break;
        case (0): printf("Letter grade: F");break;

    }
    */
    // more elegant answer from internet
    /*
    grade = grade - (grade % 10);

    printf("Letter grade: ");

    switch (grade) {
        case 100: case 90: //case 100 falls through to case 90
                  printf("A");
                  break;
        case 80:  printf("B");
                  break;
        case 70:  printf("C");
                  break;
        case 60:  printf("D");
                  break;
        case 50: // no statement means it falls through to next case
        case 40:
        case 30:
        case 20:
        case 10:
        case 0:   printf("F");  // Numerical grades 0 - 59 Fail
                  break;
    }
    */

    // 11
    /*
    int iDigit, iNumTens, iNumOnes;
    printf("Enter a two-digit number: ");
    scanf("%d",&iDigit);
    printf("You entered the number ");
    if (iDigit > 10 && iDigit < 20)
        switch(iDigit){
            case 11: printf("eleven"); break;
            case 12: printf("twelve");break;
            case 13: printf("thirteen");break;
            case 14: printf("fourteen");break;
            case 15: printf("fifteen");break;
            case 16: printf("sixteen");break;
            case 17: printf("seventeen");break;
            case 18: printf("eighteen");break;
            case 19: printf("eleven");break;
        }
    else
    {
        iNumTens = iDigit / 10;
        iNumOnes = iDigit % 10;
        switch(iNumTens){
            case 2: printf("twenty");break;
            case 3: printf("thirty");break;
            case 4: printf("forty");break;
            case 5: printf("fifty");break;
            case 6: printf("sixty");break;
            case 7: printf("seventy");break;
            case 8: printf("eighty");break;
            case 9: printf("ninety");break;
        }
        if(iNumOnes != 0){
            printf("-");
            switch(iNumOnes){
                case 1: printf("one");break;
                case 2: printf("two");break;
                case 3: printf("three");break;
                case 4: printf("four");break;
                case 5: printf("five");break;
                case 6: printf("six");break;
                case 7: printf("seven");break;
                case 8: printf("eight");break;
                case 9: printf("nine");break;
            }
        }
    }
    printf(".\n");
    */

    return 0;
}
