/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>


/////////////////////////////////////////////////////////////////
//
//  Function Name : RangeBetweenRev
//  Description :   Print range in reverse between
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

void RangeBetweenRev(int iNo1, int iNo2)
{
    int iCnt = 0;
    if(iNo1 > iNo2)
    {
        printf("Enter valid inputs");
    }
    else
    {
        for(iCnt = iNo2; iCnt >= iNo1; iCnt--)
        {
            printf("%d\t",iCnt);
        }
    }
    
}   // End of RangeBetweenRev

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

    RangeBetweenRev(iStart,iEnd);

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