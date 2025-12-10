/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   Check number is even or odd       
//  Input :         int
//  output :        Even or Odd
//  Author :        Ajinkya Rajendra Ghag
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)              // input  
{
    int iRes = 0;

    if(iNo <= 0)                        // updator
    {
        iNo = -iNo;
    }

    iRes = iNo % 2;                     // logic
    if(iRes == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}   // End of CheckEvenOdd

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;                                //  Input
    bool iOut = false;                              // To store output
    printf("Enter the number :");
    scanf("%d",&iValue1);

    iOut = CheckEvenOdd(iValue1);                   // Method Call

    if(iOut == true)
    {
        printf("%d is a Even number.",iValue1);
    }
    else
    {
        printf("%d is a Odd number.",iValue1);
    }
    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  Input : 12      output : Even         
//  Input : 11      Output : odd
//
/////////////////////////////////////////////////////////////////   