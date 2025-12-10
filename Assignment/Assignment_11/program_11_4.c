/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>


/////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSumEven
//  Description :   Print range with Sum of even in between
//  Input :         int
//  output :        int
//  Author :        Ajinkya Rajendra Ghag
//  Date :          2/11/2025
//
/////////////////////////////////////////////////////////////////

int RangeSumEven(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iCal = 0;
    if(iNo1 > iNo2)
    {
        printf("Enter valid inputs");
    }
    if(iNo1 <= 0)
    {
        printf("Enter valid inputs");
    }
    if(iNo2 <= 0)
    {
        printf("Enter valid inputs");
    }
    else
    {
        for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
            iCal = iCal + iCnt;
            }
        }
    }
    return iCal;
    
}   // End of RangeSumEven

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iStart = 0, iEnd = 0;
    int iRes =0;
    printf("Enter starting of range:");
    scanf("%d",&iStart);
    printf("Enter Ending of range:");
    scanf("%d",&iEnd);

    iRes = RangeSumEven(iStart,iEnd);

    printf("Sum of Even provided range is %d",iRes);
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