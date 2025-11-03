/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactor
//  Description :   Print Even factors of given number  
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)                  // Innput           
{
    int iCnt = 0;

    if(iNo < 0)                                 // Updator
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= (iNo/2); iCnt++)       // logic
    {
            if(iNo % iCnt == 0 && iCnt % 2 == 0 )
            {
                printf("%d\t", iCnt);    
            }
    }

}   // End of DisplayEvenFactor

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;                // Input

    printf("Enter the number :");
    scanf("%d",&iValue1);

    DisplayEvenFactor(iValue1);  // Method Call

    return 0;
}   // End of Main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  Input = 36      output : 2  6   12  18
//
/////////////////////////////////////////////////////////////////   