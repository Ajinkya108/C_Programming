/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDifferFactor
//  Description :   Print Sum of all Non factors   
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

int DisplayDifferFactor(int iNo)                
{
    int iCnt = 0;
    int iCal = 0 , iNonCal = 0, iRes = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt < iNo ; iCnt++)
    {
            if(iNo % iCnt == 0)
            {
                iCal = iCal + iCnt;
            }
            else
            {
                iNonCal = iNonCal + iCnt;
            }
    }
    iRes = iCal - iNonCal;
    return iRes;
}   // End of DisplayDifferFactor

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iRes = 0;
    printf("Enter the number :");
    scanf("%d",&iValue1);

    iRes = DisplayDifferFactor(iValue1);  // Method Call

    printf("Diffrance in factos and Non Factors is : %d", iRes);
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