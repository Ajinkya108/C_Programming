/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckFourAcc
//  Description :   Check occrances of four
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

int CheckFourAcc(int iNo1)
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
        if(iCnt == 4)
        {
            iCal++;
        }
        iNo1 = iNo1 / 10;
    }
    return iCal;
}   // End of CheckFourAcc

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

    iRes = CheckFourAcc(iValue);

    printf("Occrances of 4 are %d", iRes);
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