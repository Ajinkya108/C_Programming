/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayNonFactorSum
//  Description :   Print Sum of all Non factors   
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

int DisplayNonFactorSum(int iNo)                
{
    int iCnt = 0;
    int iCal = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= iNo ; iCnt++)
    {
            if(iNo % iCnt != 0)
            {
                iCal = iCal + iCnt;
            }
    }
    return iCal;
}   // End of DisplayNonFactorSum

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

    iRes = DisplayNonFactorSum(iValue1);  // Method Call

    printf("Sum of all non Factors is : %d", iRes);
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