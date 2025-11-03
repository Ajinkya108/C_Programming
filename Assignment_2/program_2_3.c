/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : PrintHelloDemo
//  Description :   check and print Demo or hello       
//  Input :         int
//  output :        Demo or Hello
//  Author :        Ajinkya Rajendra Ghag
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void PrintHelloDemo(int iNo)                    // input         
{
    int iCnt = 0;                               // for iteration

    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }

}   // End of PrintHelloDemo

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         // Input

    printf("Enter the number :");
    scanf("%d",&iValue);

    PrintHelloDemo(iValue);                 // Method Call

    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  Input : 9       Output : Hello
//  Input : 11      Output : Demo
//
/////////////////////////////////////////////////////////////////   