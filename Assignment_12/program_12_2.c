/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : FactorsCount
//  Description :   Print positive Factors Count
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

int FactorsCount(int iNo1)
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
            iRes = iRes + 1;
        }
    }
    return iRes;
}   // End of FactorsCount

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

    iCal = FactorsCount(iValue);
    printf("%d is count of factors",iCal);
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