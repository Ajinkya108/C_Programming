/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : FactorsSum
//  Description :   Print positive Factors Sum
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

int FactorsSum(int iNo1)
{
    int iCnt = 0;
    int iRes = 0;

    if(iNo1 <= 0)
    {
        iNo1 = -iNo1;
    }
    
    for(iCnt = 1 ; iCnt <= iNo1 ; iCnt++)
    {
        if(iNo1 % iCnt == 0)
        {
            iRes = iRes + iCnt;
        }
    }
    return iRes;
}   // End of FactorsSum

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCal = 0;
    printf("Enter a number:");
    scanf("%d",&iValue);

    iCal = FactorsSum(iValue);
    printf("%d is Sum of factors",iCal);
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