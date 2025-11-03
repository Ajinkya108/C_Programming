/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeap
//  Description :   Check the leap year
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

bool CheckLeap(int iNo)                
{   
    if(iNo % 4 == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
    
    
}   // End of CheckLeap

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRes = 0;
    printf("Enter the Year in format yyyy :");
    scanf("%d",&iValue);

    bRes = CheckLeap(iValue);  // Method Call
    
    if(bRes == true)
    {
        printf("%d is a Leap Year", iValue);
    }
    else
    {
        printf("%d is not a leap year", iValue);
    }
    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input1 : 2024          Output : 2024 is Leap Year
//  Input1 : 2025          Output : 2025 is Not Leap Year
//
//
/////////////////////////////////////////////////////////////////   