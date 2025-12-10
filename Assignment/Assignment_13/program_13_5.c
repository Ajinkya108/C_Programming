/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : Print_SumEvenNumbers
//  Description :   Print sum of numbers till N
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

int Print_SumEvenNumbers(int iNo1)
{
    int iCnt = 0;
    int iCal = 0;
    if(iNo1 <= 0)
    {
        iNo1 = -iNo1;
    }
    
    for(iCnt = 1 ; iCnt <= iNo1 ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iCal = iCal + iCnt;
        }
    }
    return iCal;
}   // End of Print_SumEvenNumbers

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iAns = 0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    iAns = Print_SumEvenNumbers(iValue);

    printf("Sum of Even Numbers is %d",iAns);
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