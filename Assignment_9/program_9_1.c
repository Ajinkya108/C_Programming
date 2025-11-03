/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayStarHash
//  Description :   Display N times * and #
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

void DisplayStarHash(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("*\t");
    }
        for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("#\t");
    }

}   // End of DisplayStarHash

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

    DisplayStarHash(iValue);

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