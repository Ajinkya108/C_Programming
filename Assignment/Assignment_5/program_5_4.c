/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPosNegZero
//  Description :   Check Postive Negative and zero  
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

void CheckPosNegZero(int iNo)                
{
    
    if(iNo < 0)
    {
        printf("%d is Negative number", iNo);
    }
    else if(iNo > 0)
    {
        printf("%d is a positive number", iNo);
    }
    else
    {
        printf("%d is a Zero",iNo);
    }
    
    
}   // End of CheckPosNegZero

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;

    printf("Enter the number :");
    scanf("%d",&iValue1);

    CheckPosNegZero(iValue1);  // Method Call

    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input : 23           Output : 23 is Positive
//  Input : -98          Output : -98 is Negative
//
//
/////////////////////////////////////////////////////////////////   