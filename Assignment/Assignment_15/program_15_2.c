/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CountOddAcc
//  Description :   Count Odd Occarances
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

int CountOddAcc(int iNo1)
{
    int iCnt = 0;
    int iCal = 0;
    if(iNo1 <= 0)
    {
        iNo1 = -iNo1;
    }
    
    while(iNo1 > 0)
    {
        iCnt = iNo1 % 10;
        if(iCnt % 2 != 0)
        {
            iCal++;
        }
        iNo1 = iNo1 / 10;
    }
    return iCal;
}   // End of CountOddAcc

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRes = 0;
    printf("Enter a number:");
    scanf("%d",&iValue);

    iRes = CountOddAcc(iValue);

    printf("Count of Odd numbers are %d", iRes);
    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//
//
//
//
/////////////////////////////////////////////////////////////////   