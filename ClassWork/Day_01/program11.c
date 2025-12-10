/*
    ALGORITHM

        START
            Accept first number as No1
            Accept Second number as aNo2
            if the input is negative convert it into positive
            Perform addition of No1 and No2
            Display the addition on screen
        STOP
*/

////////////////////////////////////////////////////////////////////////////////
//
//      Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function name : AdditionTwoNumbers
//  Decription :    It is used to perform Addition
//  Input :         Float, Float
//  Output :        Float
//  Author:         Ajinkya Rajendra Ghag
//  Date :          9-10-2025
//
////////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1,     // First input 
                            float fNo2      // Second input
                        )
{
    float fSum=0.0f;                        // To store the result

    if(fNo1 < 0.0f)                         // Updator
    {
        fNo1 = -fNo1;
    }
    
    if(fNo2 < 0.0f)                         // Updator
    {
        fNo2 = -fNo2;
    }
    
    fSum = fNo1 + fNo2;                     //Business Logic
    
    return fSum;
}   //End of AdditionTwoNumbers

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;   //
    float fRet = 0.0f                       //

    printf("Enter first number : \n");
    scanf("%f",&fValue1);
    
    printf("Enter Second number : \n");
    scanf("%f",&fValue2);
    
    fRet  = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : %f\n",fRet);      // Method call
    
    return 0;
}   // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10.5    Input2 : 3.2    Output : 13.7
//  Input1 : -10.5   Input2 : 3.2    Output : 13.7
//  Input1 : 10.5    Input2 : -3.2   Output : 13.7
//  Input1 : -10.5   Input2 : -3.2   Output : 13.7
//  Input1 : 10.5    Input2 : 3.2    Output : 13.7
//
//
////////////////////////////////////////////////////////////////////////////////
