/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactorMultiplication
//  Description :   Display factor Multiplication  
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

int DisplayFactorMultiplication(int iNo)                
{
    int iCnt = 0;
    int iRes = 0;
    iRes = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= (iNo/2); iCnt++)
    {
            if(iNo % iCnt == 0)
            {
                iRes = iRes * iCnt;
            }
    }
    return iRes;

}   // End of DisplayFactorMultiplication

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

    iCal = DisplayFactorMultiplication(iValue1);  // Method Call

    printf("Multiplication of factors is %d",iCal);

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