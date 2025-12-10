/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>


/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayNumbers
//  Description :   Display Numbers
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

void DisplayNumbers(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        for(iCnt = iNo ; iCnt < 0 ; iCnt++)
        {
            printf("%d\t",iCnt);
        }
    }
    else
    {
        for(iCnt =1 ; iCnt <= iNo ; iCnt++)
        {
            printf("%d \t",iCnt);
        } 
    }
}   // End of DisplayNumbers

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

    DisplayNumbers(iValue);

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