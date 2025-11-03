/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h> 

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDevisible
//  Description :   check the given number is devisioble by 5 or not         
//  Input :         int
//  output :        boolean
//  Author :        Ajinkya Rajendra Ghag
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

bool CheckDevisible(int iNo)                // Input
{
    if(iNo % 5 == 0)                        // Condition
    {
        return true;
    }
    else
    {
        return false;
    }
}   // End of CheckDevisible

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         // To accept input
    bool bRes = false;                      // To store result
    printf("Enter the number :");
    scanf("%d",&iValue);

    bRes = CheckDevisible(iValue);          // Method Call

    if(bRes == true)
    {
        printf("%d is Divisible by 5.",iValue);
    }
    else
    {
        printf("%d is not Divisible by 5.",iValue);
    }
    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  Input : 5       output = divisible by 5
//  Input : -55     output = divisible by 5
//  Input : 8       output = not divisible by 5
//  Input : -18     output = not divisible by 5
//
/////////////////////////////////////////////////////////////////   