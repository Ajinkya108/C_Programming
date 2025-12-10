/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : Print_EvenNumbers
//  Description :   Print even numbers till N
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

void Print_EvenNumbers(int iNo1)
{
    int iCnt = 0;

    if(iNo1 <= 0)
    {
        iNo1 = -iNo1;
    }
    
    for(iCnt = 1 ; iCnt <= iNo1 ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
        printf("%d\t",iCnt);
        }
    }
}   // End of Print_EvenNumbers

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter a number:");
    scanf("%d",&iValue);

    Print_EvenNumbers(iValue);

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