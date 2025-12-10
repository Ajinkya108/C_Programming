/*
    Algorithm

    START
        Accept first number as no1
        Accept second number as no2
        check the number is zero or not
        Perform Division of no1 / no2
        Display the Division on screen
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DivideTwoNumbers
//  Description :   It is used to perform Division         
//  Input :         Float, Float 
//  Output :        Float
//  Author :        Ajinkya Rajendra Ghag
//  Date :          25/10/2025
//
/////////////////////////////////////////////////////////////////

float DivideTwoNumbers(
                            float fNo1,             // First Input
                            float fNo2              // Second Input
                       )
{
    float fAns = 0.0f;                              // To store the result

    if(fNo2 == 0)                                   // Updator
    {
        return -1;
    }
    else
    {

    fAns = fNo1 / fNo2;                             // business logic
    return fAns;
    
    } 
}   // End of DivideTwoNumbers

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;       // To accept the User Input
    float fRet = 0.0f;                          // To store the result

    printf("Enter first number : ");
    scanf("%f",&fValue1);
    printf("\nEnter Second number : ");
    scanf("%f",&fValue2);
    
    fRet = DivideTwoNumbers(fValue1, fValue2);  // Method Call

    if(fRet == -1)
    {
        printf("Division by Zero is not allowed\n");
    }
    else
    {
    printf("Division of %f and %f is %f\n",fValue1, fValue2, fRet);
    }
    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input1 : 12.00      Input2 : 6.00       Output : 2.00
//  Input1 : -12.00     Input2 : 6.00       Output : -2.00
//  Input1 : -12.00     Input2 : -6.00      Output : 2.00
//  Input1 : 12.00      Input2 : 0.0        Output : Error
//  Input1 : 12.5       Input2 : -6.00      Output : -2.00
//
/////////////////////////////////////////////////////////////////   