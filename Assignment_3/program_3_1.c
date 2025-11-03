/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description :   Print Even numbers Given number's times       
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          02/11/2025
//
/////////////////////////////////////////////////////////////////

void PrintEven(int iNo)                
{
    int iCnt = 0, iFreqency = 0;

    if(iNo <= 0)
    {
        return;
    }

    iFreqency = 2;

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
            printf("%d\t",iFreqency);
            iFreqency+=2;
    }

}   // End of PrintEven

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

    PrintEven(iValue1);  // Method Call

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