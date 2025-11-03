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

void DisplayEvenFactor(int iNo)                
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= (iNo/2); iCnt++)
    {
            if(iNo % iCnt == 0)
            {
                if(iCnt % 2 == 0)
                {
                    printf("%d\t", iCnt);
                }
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
    int iValue1 = 0;

    printf("Enter the number :");
    scanf("%d",&iValue1);

    DisplayEvenFactor(iValue1);  // Method Call

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