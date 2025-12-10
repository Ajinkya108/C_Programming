/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>


/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayTableRev
//  Description :   Displays table of number
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

void DisplayTableRev(int iNo)
{
    int iCnt = 0;
    int iRes = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 10 ; iCnt > 0 ; iCnt--)
    {
        iRes = iNo * iCnt;
        printf("%d\t", iRes);
    }

}   // End of DisplayTableRev

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    DisplayTableRev(iValue);

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