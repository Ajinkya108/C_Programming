/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>


/////////////////////////////////////////////////////////////////
//
//  Function Name : FactorialOddNumber
//  Description :   Factorial of Even number
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

int FactorialOddNumber(int iNo)
{
    int iCnt = 0;
    int iRes = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo ; iCnt > 0 ; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
        iRes = iRes * iCnt;
        }
    }
    return iRes;
}   // End of FactorialOddNumber

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCal = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    iCal = FactorialOddNumber(iValue);

    printf("Even factorial of %d is %d",iValue, iCal);
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