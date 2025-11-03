/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//
//  Function Name : ChckEvenOdd
//  Description :   Check Even odd 
//  Input :         int
//  output :        bool
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

bool ChckEvenOdd(int iNo)                
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}   // End of ChckEvenOdd

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iCal = 0;
    printf("Enter the number :");
    scanf("%d",&iValue1);

    iCal = ChckEvenOdd(iValue1);  // Method Call

    if(iCal == true)
    {
        printf("%d is Even Number",iValue1);
    }
    else
    {
        printf("%d is Odd Number",iValue1);
    }
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