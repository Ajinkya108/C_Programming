/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : PrintStar
//  Description :   Print *  n times       
//  Input :         int
//  output :        boolean
//  Author :        Ajinkya Rajendra Ghag
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void PrintStar(int iNo)                         // Input              
{
    int iCnt = 0;                               
    if(iNo <= 0)
    {
        iNo = -iNo ;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");                            // Business logic
    }

}   // End of PrintStar

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         // accept the number

    printf("Enter the number :");
    scanf("%d",&iValue);

    PrintStar(iValue);                      // Method Call

    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  input : 5   output : *****
//  input : 2   output : **
//
/////////////////////////////////////////////////////////////////   