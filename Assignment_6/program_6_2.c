/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckGreaterSmaller
//  Description :   Check Number is greater or smaller than 100
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

bool CheckGreaterSmaller(int iNo)                
{   
    if(iNo < 100 )
    {
        return false;
    }
    else
    {
        return true;
    }
}   // End of CheckGreaterSmaller

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRes = false;
    printf("Enter the number :");
    scanf("%d",&iValue);
    
    bRes = CheckGreaterSmaller(iValue);  // Method Call
    
    if(bRes == true)
    {
        printf("%d is greater than 100", iValue);
    }
    else
    {
        printf("%d is less than 100", iValue);
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