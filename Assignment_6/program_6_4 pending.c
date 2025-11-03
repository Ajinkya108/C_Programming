/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : MultiplyThree
//  Description :   Check Number are equal or not
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

int MultiplyThree(int iNo1, int iNo2, int iNo3)                
{   
    int iCal = 0; 
    // handling zero's
        iCal = iNo1 * iNo2 * iNo3;
        return iCal;
}   // End of MultiplyThree

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRes = 0;

    printf("Enter the first number :");
    scanf("%d",&iValue1);
    printf("Enter the Second number :");
    scanf("%d",&iValue2);
    printf("Enter the third number :");
    scanf("%d",&iValue3);

    iRes = MultiplyThree(iValue1, iValue2, iValue3);  // Method Call
    
    printf("Multiplication of entered number is %d\t", iRes);
    
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