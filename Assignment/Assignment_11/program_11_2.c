/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>


/////////////////////////////////////////////////////////////////
//
//  Function Name : RangeEvenBetween
//  Description :   Print range with Even in between
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

void RangeEvenBetween(int iNo1, int iNo2)
{
    int iCnt = 0;
    if(iNo1 > iNo2)
    {
        printf("Enter valid inputs");
    }
    else
    {
        for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
        {
            if(iCnt%2 == 0)
            {
                printf("%d\t",iCnt);
            }
        }
    }
    
}   // End of RangeEvenBetween

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iStart = 0, iEnd = 0;
    printf("Enter starting of range:");
    scanf("%d",&iStart);
    printf("Enter Ending of range:");
    scanf("%d",&iEnd);

    RangeEvenBetween(iStart,iEnd);

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