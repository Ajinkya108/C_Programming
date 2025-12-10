/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : PrintFirst
//  Description :   Print first number second numbers times       
//  Input :         int
//  output :        Even or Odd
//  Author :        Ajinkya Rajendra Ghag
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void PrintFirst(int iNo, int iFreqency)             // input from user
{
    int iCnt = 0;

    if(iNo <= 0)                                    // Updator
    {
        iNo = -iNo;
    }
    if(iFreqency <= 0)                              // Updator
    {
        iFreqency = -iFreqency;
    }

    for(iCnt = 1;iCnt <= iFreqency; iCnt++)         // Loop
    {
        printf("%d\t",iNo);                         // logic
    }

}   // End of PrintFirst

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;                   // Input User value

    printf("Enter the First number :");
    scanf("%d",&iValue1);
    printf("Enter the Second number :");
    scanf("%d",&iValue2);

    PrintFirst(iValue1, iValue2);                   // Method Call

    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input : 12 2    output : 12 12
//  Input : 44 5    output : 44 44 44 44 44
//
/////////////////////////////////////////////////////////////////   