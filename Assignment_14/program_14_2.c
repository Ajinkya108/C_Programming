/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckZero
//  Description :   Check zero is present or not
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

bool CheckZero(int iNo1)
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
        if(iCnt == 0)
        {
            return true;
        }
        iNo1 = iNo1 / 10;
    }

}   // End of CheckZero

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRes = false;
    printf("Enter a number:");
    scanf("%d",&iValue);

    bRes = CheckZero(iValue);

    if(bRes == true)
    {
        printf("Number comtains zero");
    }
    else
    {
        printf("Number comtains NO zero");
    }
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