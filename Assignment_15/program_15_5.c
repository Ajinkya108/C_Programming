/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : MuliplyInNumbers
//  Description :   Multiply the numbers in between
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

int MuliplyInNumbers(int iNo1)
{
    int iCnt = 0;
    int iCal1 = 0, iCal2 = 0, iSub = 0;

    if(iNo1 <= 0)
    {
        iNo1 = -iNo1;
    }
    
    while(iNo1 > 0)
    {
        iCnt = iNo1 % 10;
        if(iCnt % 2 == 0 )
        {
            iCal1 = iCal1 + iCnt;
        }
        else
        {
            iCal2 = iCal2 + iCnt;
        }
        iNo1 = iNo1 / 10;
    }
    iSub = iCal1 - iCal2 ;
    return iSub;
}   // End of MuliplyInNumbers

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

    iRes = MuliplyInNumbers(iValue);

    printf("Diffrance between sum of even and odd is %d", iRes);
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