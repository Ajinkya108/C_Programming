/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayInRev
//  Description :   Print positive Print numbers till N
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

void DisplayInRev(int iNo1)
{
    int iCnt = 0;
    int iCal = 0;
    if(iNo1 <= 0)
    {
        iNo1 = -iNo1;
    }
    
    while(iNo1 > 0)
    {
        iCnt = iNo1 % 10;
        printf("%d\n",iCnt);
        iNo1 = iNo1 / 10;
    }

}   // End of DisplayInRev

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter a number:");
    scanf("%d",&iValue);

    DisplayInRev(iValue);

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