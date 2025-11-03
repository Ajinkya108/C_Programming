/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDivision
//  Description :   Check number is divisible by 5 or not
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

bool CheckDivision(int iNo1)
{
    bool iRes = false;

    if(iNo1 <= 0)
    {
        iNo1 = -iNo1;
    }
    
    if(iNo1 % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}   // End of CheckDivision

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool iCal = false;
    printf("Enter a number:");
    scanf("%d",&iValue);

    iCal = CheckDivision(iValue);

    if(iCal == true)
    {
        printf("%d is divisible by 5",iValue);
    }
    else
    {
        printf("%d is not divisible by 5",iValue);
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