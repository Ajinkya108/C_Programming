/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>


/////////////////////////////////////////////////////////////////
//
//  Function Name : NumberCheck
//  Description :   Check the number medium small greater
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

void NumberCheck(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(50<iNo && iNo<100)
    {
        printf("Medium");
    }
    else
    {
        printf("Greater");
    }

}   // End of NumberCheck

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

    NumberCheck(iValue);

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