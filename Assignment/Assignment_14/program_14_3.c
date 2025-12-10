/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckTwoAcc
//  Description :   Check occrances of two
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

int CheckTwoAcc(int iNo1)
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
        if(iCnt == 2)
        {
            iCal++;
        }
        iNo1 = iNo1 / 10;
    }
    return iCal;
}   // End of CheckTwoAcc

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

    iRes = CheckTwoAcc(iValue);

    printf("Occrances of 2 are %d", iRes);
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